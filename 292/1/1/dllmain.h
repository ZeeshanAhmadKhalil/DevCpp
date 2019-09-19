// dllmain.h : Declaration of module class.

class CMy1Module : public CAtlDllModuleT< CMy1Module >
{
public :
	DECLARE_LIBID(LIBID_My1Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MY1, "{BBC78F0A-7D3D-46B5-845D-C1DCCBC7881F}")
};

extern class CMy1Module _AtlModule;
