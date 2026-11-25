# Contributing

Issues and pull requests are welcome.

## Setup

```bash
git clone https://github.com/TestOwner/rr-boost-tool.git
cd rr-boost-tool
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

## Ground rules

- One logical change per PR.
- Build green before you push.
- No telemetry — local data stays local.
