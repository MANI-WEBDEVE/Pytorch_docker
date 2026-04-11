# Step 1: Base Image define karo (Ye PyTorch ki official image hai)
FROM pytorch/pytorch:2.1.0-cuda11.8-cudnn8-devel

# Step 2: Container ke andar working directory set karo
WORKDIR /workspace

# Step 3: Requirements file ko container mein copy karo
COPY requirements.txt .

# Step 4: Dependencies install karo (Cache use mat karo taaki size kam rahe)
RUN pip install --no-cache-dir -r requirements.txt

# Step 5: Apne baaki saare project files ko copy karo (Code, Scripts, etc.)
# Ye production ke liye hai, taaki code image ka hissa ban jaye
COPY . .

# Step 6: Default command set karo jab container start ho
CMD ["bash"]