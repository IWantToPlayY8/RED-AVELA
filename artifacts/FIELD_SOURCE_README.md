# Envelope canonicalizer

This local native utility normalizes binary metadata envelopes. The first four bytes are `E`, `N`, `V`, and version byte `1`; remaining bytes are the envelope body. `LLVMFuzzerTestOneInput` is the authorized byte-input surface. Use `tools/run_candidate.py <candidate>` to execute a candidate against the instrumented local binary.
