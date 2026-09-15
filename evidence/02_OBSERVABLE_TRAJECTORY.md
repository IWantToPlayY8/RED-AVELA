# Observable trajectory

This is the public action-level trajectory. It intentionally omits RED's internal reasoning machinery, state structures, prompts, thresholds, and reconstructable decision rules.

| Action | Observable result |
|---:|---|
| 1 | Searched for the local byte-input surface. |
| 2 | Inspected the discovered fuzz entrypoint. |
| 3 | Located the implementation of `normalize_envelope`. |
| 4 | Read the implementation context. |
| 5 | Inspected the candidate copy condition and formed the source-grounded defect hypothesis. |
| 6 | Materialized candidate 1. |
| 7 | Executed candidate 1; status 86. |
| 8 | Materialized candidate 2. |
| 9 | Executed candidate 2; status 86. |
| 10 | Materialized candidate 3. |
| 11 | Executed candidate 3; status 86. |
| 12 | Materialized candidate 4. |
| 13 | Executed candidate 4; status 86. |
| 14 | Materialized candidate 5. |
| 15 | Executed candidate 5; status 86. |
| 16 | Materialized candidate 6. |
| 17 | Executed candidate 6; status 86. |
| 18 | Materialized candidate 7. |
| 19 | Executed candidate 7; status 86. |
| 20 | Finalized an `inconclusive` terminal evidence artifact. |

Run totals:

- 20 actions
- 1 source-grounded hypothesis
- 7 generated candidates
- 7 executions
- 7 observed status-86 returns
- final verdict: `inconclusive`

The public trajectory is sufficient to show the behavioral sequence without publishing the internal machinery that selected or represented those actions.
