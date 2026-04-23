FROM silkeh/clang:latest

RUN apt-get update && apt-get install -y \
    cmake \
    gdb \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir -p /app/OUTPUT

# Set working directory
WORKDIR /app

# Copy build-support files first (if needed for build)
COPY COPY/ /app/COPY/

# Copy project source
COPY . /app/


CMD ["./build/IDV"]