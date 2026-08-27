param(
    [string]$GameDirectory = ""
)

$launcherDirectory = Split-Path -Parent $MyInvocation.MyCommand.Path
$executable = Join-Path $launcherDirectory "project\build\bin\conker_recomp.exe"

if ([string]::IsNullOrWhiteSpace($GameDirectory)) {
    $workspaceCopy = Join-Path $launcherDirectory "game_files\Conker"
    $downloadsCopy = Join-Path $env:USERPROFILE "Downloads\Conker"
    if (Test-Path -LiteralPath (Join-Path $workspaceCopy "default.xbe") -PathType Leaf) {
        $GameDirectory = $workspaceCopy
    } else {
        $GameDirectory = $downloadsCopy
    }
}

if (-not (Test-Path -LiteralPath $executable -PathType Leaf)) {
    throw "Conker recompilation executable was not found: $executable"
}

if (-not (Test-Path -LiteralPath (Join-Path $GameDirectory "default.xbe") -PathType Leaf)) {
    throw "The extracted game directory must contain default.xbe: $GameDirectory"
}

& $executable $GameDirectory
exit $LASTEXITCODE
