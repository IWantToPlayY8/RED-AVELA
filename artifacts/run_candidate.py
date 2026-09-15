from pathlib import Path
import subprocess, sys

candidate = Path(sys.argv[1]).resolve()
if candidate.stat().st_size > 16384:
    raise SystemExit(64)
target = Path(__file__).resolve().parents[1] / "bin" / "envelope_probe.exe"
result = subprocess.run([str(target), str(candidate)], capture_output=True, timeout=8)
sys.stdout.buffer.write(result.stdout)
sys.stderr.buffer.write(result.stderr)
raise SystemExit(result.returncode)
