# Architecture

Generated and hand-written clients for apostille workflows, status checks, uploads, and typed errors.

## Fleet

- `apostille-me-libs`
- `apostille-me-clients`
- `apostille-me-infra`
- `apostille-me.github.io`
- `apostille-me-monorepo`

Interfaces own wire formats; libraries own reusable domain behavior; clients consume versioned contracts; runtimes own deployment behavior; monorepos coordinate pinned revisions. Edge code is allowlisted and never a generic proxy.
