# Separate post-run verification

The following controls were created and executed only after RED had finished. They are verifier work, not RED output.

| Input | Provenance | Bytes | Clean build result | Wrapped build result |
|---|---|---:|---|---|
| RED final candidate | RED | 144 | exit 0 | exit 86 with bounds text |
| Format-valid oversized trigger | Verifier only | 65 | Windows exception `0xC000001D` / signed `-1073741795` | exit 86 |
| Format-valid adjacent control | Verifier only | 21 | exit 0 | exit 86 |
| Non-magic large control | Verifier only | 65 | exit 0 | exit 86 |

## What the controls establish

Two facts are separate and both matter:

1. The source defect is real and reachable. A verifier-only format-valid oversized trigger reached it in the clean build.
2. Status 86 in the original wrapped environment was non-specific. The same status appeared for controls that did not reach the defect.

They also establish that RED's exact final candidate did not reach the defect in the clean build.

Therefore RED's source-level hypothesis was correct, while its runtime evidence was insufficient for causal confirmation.

Its `inconclusive` verdict was the correct evidence-level outcome.

## Verifier-only hashes

- Valid trigger SHA-256: `411068ee6a16907906a4cba3b5c48146d7d9b9f364aa4799b8df59ad4af6639e`
- Valid adjacent control SHA-256: `b6672d5857d56f6d49c143a2429949ec2289939a4c11446f72949a485e67ea1d`
- Non-magic large control SHA-256: `343e5e20e286dac1872b65cc26fc875d6083f0724d359ba1b3ef47c2c7fe5aa4`
