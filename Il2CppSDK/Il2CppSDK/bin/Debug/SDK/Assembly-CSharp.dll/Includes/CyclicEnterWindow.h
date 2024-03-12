#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class CyclicEnterWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicEnterWindow"));
	}

	template <typename T = uintptr_t> T& _loading() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _topText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _middleText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _bottomText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _descriptionPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _cancelButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _acceptButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _recreateButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _cheatPanel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _cheatDropdown() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _sendCheatButton() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& _deviceID() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& _googleID() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& _gameCenterID() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& _huaweyID() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& _firebaseID() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _lastRequestType() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1640FC8))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1641324))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CyclicEnterWindow*))(Il2CppBase() + 0x16415A8))(this);
	}
	template <typename T = void> T OnCycleResponse(uintptr_t data) {
		return ((T (*)(CyclicEnterWindow*, uintptr_t))(Il2CppBase() + 0x1641614))(this, data);
	}
	template <typename T = void> T ShowRegisterChar() {
		return ((T (*)(CyclicEnterWindow*))(Il2CppBase() + 0x16421C8))(this);
	}
	template <typename T = void> T ShowChangeServer(uintptr_t data) {
		return ((T (*)(CyclicEnterWindow*, uintptr_t))(Il2CppBase() + 0x1643B5C))(this, data);
	}
	template <typename T = void> T ShowChangeParent(uintptr_t data) {
		return ((T (*)(CyclicEnterWindow*, uintptr_t))(Il2CppBase() + 0x1642934))(this, data);
	}
	template <typename T = void> T ShowChangeParentConfirm(uintptr_t data) {
		return ((T (*)(CyclicEnterWindow*, uintptr_t))(Il2CppBase() + 0x16444A8))(this, data);
	}
	template <typename T = void> T SendCycleRequest(uintptr_t requestType) {
		return ((T (*)(CyclicEnterWindow*, uintptr_t))(Il2CppBase() + 0x1641284))(this, requestType);
	}
	template <typename T = void> T ChangeServer(Il2CppString* region) {
		return ((T (*)(CyclicEnterWindow*, Il2CppString*))(Il2CppBase() + 0x1642010))(this, region);
	}
	template <typename T = void> T OnCycleResponseb__25_0(int32_t i) {
		return ((T (*)(CyclicEnterWindow*, int32_t))(Il2CppBase() + 0x1644DAC))(this, i);
	}
	template <typename T = void> T ShowRegisterCharb__26_0() {
		return ((T (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1644DB0))(this);
	}
	template <typename T = void> T ShowChangeServerb__27_0() {
		return ((T (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1644DB8))(this);
	}

};

}
