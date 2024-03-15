#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ServerSelectionWindow : public UIWindow1<ServerSelectionWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindow"));
	}

	template <typename R = uintptr_t> R& RegionsContainer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = RegionView*> R& RegionPrefab() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseButtonView() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& ChangeServerButtonText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ChangeServerButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& ContactUsButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Config*> R& _config() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppString*> R& _routerURL() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = Il2CppString*> R& _savedRegion() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ServerSelectionWindow*))(Il2CppBase() + 0x162043C))(this);
	}
	template <typename R = void> R CloseWindow() {
		return ((R (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1620DDC))(this);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1620718))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1620EF8))(this);
	}
	template <typename R = void> R OnChangeServerButtonClick() {
		return ((R (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1621004))(this);
	}
	template <typename R = void> R OnContactUsButtonClick() {
		return ((R (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1622290))(this);
	}
	template <typename R = void> R ShowChangeServerConfirmPopup(Il2CppString* serverMainName, Il2CppString* serverName, Il2CppString* serverSubRegion, bool isCyclic) {
		return ((R (*)(ServerSelectionWindow*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1621DA0))(this, serverMainName, serverName, serverSubRegion, isCyclic);
	}
	template <typename R = void> R ChangeServer(Il2CppString* serverMainName, Il2CppString* serverName, Il2CppString* serverSubRegion, bool isCyclic) {
		return ((R (*)(ServerSelectionWindow*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1621758))(this, serverMainName, serverName, serverSubRegion, isCyclic);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ServerSelectionWindow*, float))(Il2CppBase() + 0x16222EC))(this, deltaTime);
	}
	template <typename R = void> R RefreshStatus() {
		return ((R (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1622778))(this);
	}
	template <typename R = void> R RefreshStatusb__22_0(ProtoTools::ErrorCodes code, Il2CppString* codeMessage, Il2CppString* regionName, Il2CppString* url, Il2CppArray<ProtoModels::ServerInfo*>* regionList) {
		return ((R (*)(ServerSelectionWindow*, ProtoTools::ErrorCodes, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<ProtoModels::ServerInfo*>*))(Il2CppBase() + 0x1622894))(this, code, codeMessage, regionName, url, regionList);
	}

};

