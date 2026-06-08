// The user has to manually copy over a PC-made otr file for Vita, so these are all no-ops and here to please the
// compiler gods
#include "Extractor/Extract.h"

void Extractor::ShowErrorBox(const char* title, const char* text) {
}

void Extractor::SetSearchPath(const std::string& path) {
}

void Extractor::GetRoms(std::vector<std::string>& roms) {
}

bool Extractor::ManuallySearchForRomMatchingType(RomSearchMode searchMode) {
    return false;
}

bool Extractor::RunFileStandalone(std::string file) {
    return false;
}

bool Extractor::CallZapd(std::string installPath, std::string exportdir, std::atomic<size_t>* extractCount,
                         std::atomic<size_t>* totalExtract) {
    return false;
}
