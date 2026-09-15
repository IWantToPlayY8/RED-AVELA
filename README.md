# RED AVELA

### An artificial brain for AI that can act on what it does not know.

A typical AI interaction starts with what the system already has: a question arrives, the model reasons over the information available to it, and an answer comes back.

RED AVELA begins from a different idea:

**What if not knowing something could become a reason to act?**

RED AVELA is what its creator calls an **artificial brain for AI**.

By “artificial brain,” we mean something concrete.

When RED does not know something it needs, the investigation does not have to stop there. It can go into an external environment, look for what is missing, bring what it finds back into the investigation, and allow that new evidence to change what it does next.

When uncertainty becomes specific enough, RED can turn it into an experiment. It can construct an input, run that experiment against a real executable system, observe what actually happened, and let the result change what it is willing to believe.

In its simplest form:

**think → act → reality responds → think again**

For RED AVELA, ignorance does not have to be where reasoning ends.

**It can be where investigation begins.**

## The outside world can become part of the reasoning

RED does not treat the external world as merely the place where a final answer is delivered.

It can encounter something it did not know before and let that discovery alter the next action. It can form a hypothesis from what it finds, materialize an experiment, execute that experiment, and allow reality to overrule the story it might otherwise have told itself.

A system that can generate hypotheses but cannot be corrected by the world remains trapped inside its own reasoning.

RED was built so the investigation can cross that boundary.

## Why security

Security is not the identity of RED AVELA.

It is the field in which we chose to make this behavior collide with reality.

Software is unforgiving. A source-level explanation can sound convincing and still be wrong. A candidate can look plausible and still fail to reach the code it was meant to test. A runtime signal can appear meaningful and still be misleading.

Software does not care whether an explanation sounds impressive.

**Eventually, reality gets a vote.**

That makes security research a hard proving ground for the kind of system RED is meant to become.

# One preserved run

This repository publishes one preserved Work 2 run because it exposes the behavior unusually clearly.

RED AVELA 0.4.3 entered the run unchanged. Its wheel hash matched before launch, the run began from fresh state, and no evaluator-imposed action ceiling was set; RED's own experiment budget remained bounded. RED received a small synthetic native-code repository, its compiled executable, a documented byte-input surface, and an ordinary runner. It did not receive the target location, verifier-produced inputs, an expected candidate, or the later post-run analysis.

Then RED went to work.

It found the byte-input entrypoint. It traced that input into `normalize_envelope` and formed a source-grounded hypothesis about an unchecked copy into a fixed `canonical[48]` buffer. It generated seven candidate artifacts and initiated seven executions of its own experiments.

Every one of those executions returned status 86.

A weaker story would stop there.

Seven executions. Seven nonzero results. A source-level defect that looked real.

It would have been easy to turn correlation into confirmation.

RED did not.

Its terminal verdict was:

**`inconclusive`**

The preserved terminal evidence states that the experiment ended without crash-confirming or explicit falsification evidence.

That decision turned out to matter.

# Reality answered back

After RED had finished, separate post-run verification replayed the run under controls that RED itself had never seen.

The result was revealing.

RED's exact final candidate exited normally against a clean build. A separate verifier-only trigger did reach the real underlying defect. But the original wrapped environment returned status 86 not only for that trigger, but also for a valid short control and a non-magic input that did not reach the vulnerable path.

In other words:

**the defect was real, but the signal RED had been seeing was not trustworthy enough to prove it.**

RED's static hypothesis was right.

Its dynamic evidence was contaminated.

And RED refused to pretend otherwise.

This is not interesting merely because RED avoided one false positive. It matters because the larger behavior is visible end to end:

**RED sought missing information, learned from what it found, formed a hypothesis, turned that hypothesis into experiments, executed them against the world, received evidence back, and allowed that evidence to determine what it was willing to conclude.**

The world did not merely receive RED's answer.

**The world participated in producing it.**

# Why we call it an artificial brain

The phrase names a behavior, not a claim of biological equivalence.

An intelligent system should not become helpless merely because the information required for the next step is absent from its initial context.

Missing knowledge can itself become actionable.

The system can seek. What it finds can change the investigation. That investigation can produce a test. The test can encounter reality. And reality can change the investigation again.

**Think. Act. Observe. Revise. Continue.**

That is the behavior RED AVELA was built to make observable.

Now there is preserved evidence of it happening.

# What this run establishes

The published record supports a precise claim:

**RED AVELA independently formed the correct source-level defect hypothesis, constructed and executed its own experiments, encountered misleading runtime evidence, and still refused to claim confirmation when reality had not earned it.**

That happened.

The artifacts are preserved. The hashes are preserved. The observable trajectory is preserved. The post-run verifier controls are separated from RED-produced work.

You do not have to take our word for it.

Start with:

- [`evidence/01_CASE_RECORD.md`](evidence/01_CASE_RECORD.md)
- [`evidence/02_OBSERVABLE_TRAJECTORY.md`](evidence/02_OBSERVABLE_TRAJECTORY.md)
- [`evidence/03_POST_RUN_VERIFICATION.md`](evidence/03_POST_RUN_VERIFICATION.md)
- [`evidence/04_PROVENANCE.md`](evidence/04_PROVENANCE.md)
- [`evidence/05_CLAIMS_AND_BOUNDARIES.md`](evidence/05_CLAIMS_AND_BOUNDARIES.md)
- [`evidence/06_DISCLOSURE_BOUNDARY.md`](evidence/06_DISCLOSURE_BOUNDARY.md)
- [`evidence/PUBLIC_RUN_SUMMARY.json`](evidence/PUBLIC_RUN_SUMMARY.json)
- [`evidence/PUBLICATION_MANIFEST.json`](evidence/PUBLICATION_MANIFEST.json)

# The boundary

This repository shows **what RED AVELA did**.

It does not publish the machinery that makes RED AVELA think this way.

The RED implementation, reasoning architecture, internal decision rules, prompts, thresholds, state-transition logic, and reconstructable generation recipes are not part of this release.

The public rule is simple:

**Show the intelligence. Preserve the evidence. Hide the recipe.**

# RED AVELA

The interesting question is no longer whether an AI can produce another answer.

The question is:

**What happens when an AI can respond to the boundary of its own knowledge by going out and doing something about it?**

RED AVELA can go looking for what it does not know.

It can let what it finds change what it does next.

It can turn uncertainty into experiments.

And it can let reality decide what survives.

**We now have a preserved run showing exactly that.**
