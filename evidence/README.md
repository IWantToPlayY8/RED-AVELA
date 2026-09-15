# Evidence index

This directory contains the public evidence for the single preserved Work 2 run described in the repository README.

The order is deliberate:

1. `01_CASE_RECORD.md` — what happened.
2. `02_OBSERVABLE_TRAJECTORY.md` — the public, non-reconstructive action sequence.
3. `03_POST_RUN_VERIFICATION.md` — separate verifier controls performed after RED stopped.
4. `04_PROVENANCE.md` — identities, hashes, and artifact separation.
5. `05_CLAIMS_AND_BOUNDARIES.md` — what the evidence supports and what it does not claim.
6. `06_DISCLOSURE_BOUNDARY.md` — what is intentionally withheld to protect the RED implementation.
7. `PUBLIC_RUN_SUMMARY.json` — machine-readable public summary.
8. `PUBLICATION_MANIFEST.json` — hashes and sizes of the public release files.

Supporting public artifacts are in the repository-root `artifacts/` directory. Hash-only references for withheld/private material are in the repository-root `private-hashes/` directory. Both directories are intentionally one level deep for simple GitHub upload and inspection.

The public release deliberately does not contain RED AVELA source code, raw internal state snapshots, prompts, internal decision machinery, or detailed reconstructable reasoning structures. The published terminal-evidence JSON is a redacted public projection of the raw RED artifact; the raw artifact's cryptographic identity is preserved separately.

The original run binaries are not published because their debug/build metadata embeds local host paths. Their cryptographic identities remain recorded in the provenance material.
