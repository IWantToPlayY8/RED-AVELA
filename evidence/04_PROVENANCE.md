# Provenance

## RED identity

- RED AVELA 0.4.3
- Wheel SHA-256: `a36cb2031023a956c941c1e080770a9ccdc4a6674219a427cf157dbe8c900186`
- Verified before launch.
- Not modified during the run.
- Fresh state at launch.

## RED-produced artifacts and public projection

- Raw terminal RED artifact: `RAW_RED_RUN/confirmed-vulnerability-evidence.json`
- Raw terminal artifact SHA-256: `fcf28c029f2dfed6e3a6d555afcb7094ca2ce9a4f754e726d2911c7dbe4ff947`
- The raw terminal artifact is preserved in the hash-sealed private bundle and is not published because it contains internal identifiers and reasoning-structure references outside the disclosure boundary.
- Public redacted projection: `artifacts/red_terminal_evidence_public.json`. It retains the claim-bearing observable fields while omitting internal IDs, confidence metadata, relation references, and workspace identifiers.
- Final RED candidate SHA-256: `f30d4c62ec55a9adca3df6e2c379e468791610c2785e91f006671915f77c1e1d`
- Final RED candidate size: 144 bytes.

## Field identity

- Original `FIELD_AS_RUN.zip` SHA-256: `aeb4cd60e0fcd78d6cda89c3b97762d528dc0f9b404c8c4e4d791a477e984f97`
- `PRE_RUN_IDENTITY.json` SHA-256: `565f50c78f50e2f36fe1b5b059ef79c639222bcb8377726afe59c694ee05ceac`

The public package includes the exact text/source files from the synthetic field under `artifacts/`. The original compiled Windows field binary is not published because it embeds local host build paths. Its hash remains fixed in `PRE_RUN_IDENTITY.json`. The original complete field archive remains hash-identified above. None of these field files contain RED AVELA source code.

## Separation rule

Files prefixed `artifacts/verifier_only_` were produced after RED stopped. They are included only to verify the meaning of the runtime observations and must never be attributed to RED.
