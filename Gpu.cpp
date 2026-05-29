
#include "Gpu.h"


std::string Gpu::getGpuName() {
    IDXGIFactory * pFactory;
    HRESULT hr = CreateDXGIFactory(__uuidof(IDXGIFactory), (void**)(&pFactory) );

    IDXGIAdapter * pAdapter;
    pFactory->EnumAdapters(0, &pAdapter);

    DXGI_ADAPTER_DESC pDesc;
    pAdapter->GetDesc(&pDesc);

    char name[256];
    wcstombs(name, pDesc.Description, 256);
    return name;
}
