# Disclosure boundary

This repository is designed to make RED AVELA's observable behavior inspectable without publishing the recipe for reproducing RED itself.

## Public

The release includes:

- the top-level capability framing;
- the exact source/text files from the synthetic field used for the preserved run;
- pre-run identity information;
- a redacted public projection of the terminal RED evidence artifact, with the raw artifact hash preserved;
- RED's final candidate;
- a public action-level trajectory;
- separate post-run verifier controls; and
- cryptographic hashes for provenance.

## Intentionally withheld

The release does not include:

- RED AVELA source code;
- the Logic Base implementation;
- internal decision rules;
- prompts or system instructions;
- thresholds and gates;
- detailed internal state-transition machinery;
- reconstructable candidate-generation recipes;
- raw internal state snapshots; or
- raw traces whose detail would materially expose the above; and
- original compiled Windows binaries that embed local host build paths.

The full preserved evidence bundle remains hash-sealed outside this public package. Its SHA-256 is recorded at the repository root in `private-hashes/FULL_PRIVATE_BUNDLE_SHA256.txt` so the private archive's identity can be fixed without publishing its reconstructive contents.

**Show the intelligence. Preserve the evidence. Hide the recipe.**
