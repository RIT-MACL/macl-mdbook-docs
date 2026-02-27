# Welcome

![Music and Audio Cognition Lab Logo](./branding/lablogo_MACL_ver3_WB.jpg)

Hello! Welcome to all things related to the Music and Audio Cognition Lab. Our main project right now is working on [a different kind of algorithm for Neuro-Steared Hearing Aids](https://www.rit.edu/macl/notice#177607)

## Intro to Neuro-Steared Hearing Aids (by Pooja Yakkala)

- Humans can attend to one speaker in noisy environments
- Brain selectively tracks attended speech
- EEG contains weak but reliable attention signatures
- Auditory Attention Decoding (AAD) = decoding focus from EEG
- This is known as the *cocktail party problem*

### The Core Problem

- **Input**
    - Multi-channel EEG
    - Two competing speech Streams
- **Output**
    - Which speaker is attended?
- **Challenges**
    - EEG is noisy and low-SNR
    - Strong subject variability
    - Small datasets, high dimensionality

### Research Objectives

- [ ] Build robust EEG + audio preprocessing pipeline
- [ ] Standardize two very different datasets
- [ ] Implement linear baseline (CCA)
- [ ] Implement deep model (CNN-LOC)
- [ ] Compare interpretability vs performance
- [ ] Evaluate generalization


