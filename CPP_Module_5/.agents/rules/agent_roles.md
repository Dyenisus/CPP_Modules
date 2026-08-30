# Multi-Agent Workflow Guidelines

When coordinating between `architect` and `executor` subagents:

1. **Role Division**:
   - `architect`: Analysis, task decomposition, subagent orchestration, review, verification.
   - `executor`: Code implementation, file modification, compilation checks, running tests.

2. **Communication Pattern**:
   - `architect` dispatches tasks with explicit requirements, expected inputs/outputs, and verification steps.
   - `executor` performs the task, runs local validation (build/test), and returns a concise summary.
   - `architect` verifies the result before proceeding to the next step.
