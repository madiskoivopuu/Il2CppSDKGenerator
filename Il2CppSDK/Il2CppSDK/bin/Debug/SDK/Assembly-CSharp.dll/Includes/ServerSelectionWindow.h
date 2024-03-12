#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ServerSelectionWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindow"));
	}

	template <typename T = uintptr_t> T& RegionsContainer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& RegionPrefab() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseButtonView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ChangeServerButtonText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ChangeServerButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ContactUsButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _config() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _routerURL() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& _savedRegion() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _logger() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ServerSelectionWindow*))(Il2CppBase() + 0x162043C))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1620DDC))(this);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1620718))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1620EF8))(this);
	}
	template <typename T = void> T OnChangeServerButtonClick() {
		return ((T (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1621004))(this);
	}
	template <typename T = void> T OnContactUsButtonClick() {
		return ((T (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1622290))(this);
	}
	template <typename T = void> T ShowChangeServerConfirmPopup(Il2CppString* serverMainName, Il2CppString* serverName, Il2CppString* serverSubRegion, bool isCyclic) {
		return ((T (*)(ServerSelectionWindow*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1621DA0))(this, serverMainName, serverName, serverSubRegion, isCyclic);
	}
	template <typename T = void> T ChangeServer(Il2CppString* serverMainName, Il2CppString* serverName, Il2CppString* serverSubRegion, bool isCyclic) {
		return ((T (*)(ServerSelectionWindow*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1621758))(this, serverMainName, serverName, serverSubRegion, isCyclic);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ServerSelectionWindow*, float))(Il2CppBase() + 0x16222EC))(this, deltaTime);
	}
	template <typename T = void> T RefreshStatus() {
		return ((T (*)(ServerSelectionWindow*))(Il2CppBase() + 0x1622778))(this);
	}
	template <typename T = void> T RefreshStatusb__22_0(uintptr_t code, Il2CppString* codeMessage, Il2CppString* regionName, Il2CppString* url, Il2CppArray<uintptr_t>* regionList) {
		return ((T (*)(ServerSelectionWindow*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1622894))(this, code, codeMessage, regionName, url, regionList);
	}

};

}
