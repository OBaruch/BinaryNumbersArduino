# AGENTS.md

Guidance for anyone — human contributors or AI coding agents — working in this repository.

## Project Summary

Historical Arduino sketch (2021) that shows the numbers 1–15 in binary on four LEDs. See [README.md](README.md).

## Hard Rules

1. **Do not modify** `src/NumerosBinarios1_15/NumerosBinarios1_15.ino`. No formatting, renaming, fixes, or line-ending changes. It is preserved as the original implementation.
2. Do not modify `LICENSE`.
3. Do not add build systems, CI/CD, containers, linters, or package managers unless explicitly requested.
4. Label facts in documentation as **Confirmed**, **Inferred**, or **Unknown**. Do not invent context.
5. Improvement ideas go in [docs/possible-improvements.md](docs/possible-improvements.md), never into the original sketch.

## Workflow

Changes follow an intent → spec → plan flow:

1. [docs/sdlc/intent.md](docs/sdlc/intent.md) — why.
2. [docs/sdlc/spec.md](docs/sdlc/spec.md) — what (requirements and acceptance criteria).
3. [docs/sdlc/plan.md](docs/sdlc/plan.md) — how, with invariants and verification.

Update these documents before or together with any structural change.

## Verification

```bash
sha256sum src/NumerosBinarios1_15/NumerosBinarios1_15.ino
# expected: f1d583c2b6527909dd0ce5eed80880fae4512268f0858d21412fd79ffbb65fd6
```

## Conventions

- Documentation language: English. Original code comments: Spanish (keep as is).
- Use relative links between Markdown files.
