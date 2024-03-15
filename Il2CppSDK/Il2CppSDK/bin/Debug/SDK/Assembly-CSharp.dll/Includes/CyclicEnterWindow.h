#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CyclicEnterWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicEnterWindow"));
	}

	template <typename R = uintptr_t> R& _loading() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _content() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _topText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _middleText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _bottomText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _descriptionPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = StandartButton*> R& _cancelButton() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = StandartButton*> R& _acceptButton() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = StandartButton*> R& _recreateButton() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _cheatPanel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _cheatDropdown() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _sendCheatButton() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = Il2CppString*> R& _deviceID() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Il2CppString*> R& _googleID() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = Il2CppString*> R& _gameCenterID() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = Il2CppString*> R& _huaweyID() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = Il2CppString*> R& _firebaseID() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = RequestType*> R& _lastRequestType() {
		return *(R*)((uintptr_t)this + 0x118);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1640FC8))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1641324))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CyclicEnterWindow*))(Il2CppBase() + 0x16415A8))(this);
	}
	template <typename R = void> R OnCycleResponse(CyclicResponseData* data) {
		return ((R (*)(CyclicEnterWindow*, CyclicResponseData*))(Il2CppBase() + 0x1641614))(this, data);
	}
	template <typename R = void> R ShowRegisterChar() {
		return ((R (*)(CyclicEnterWindow*))(Il2CppBase() + 0x16421C8))(this);
	}
	template <typename R = void> R ShowChangeServer(CyclicResponseData* data) {
		return ((R (*)(CyclicEnterWindow*, CyclicResponseData*))(Il2CppBase() + 0x1643B5C))(this, data);
	}
	template <typename R = void> R ShowChangeParent(CyclicResponseData* data) {
		return ((R (*)(CyclicEnterWindow*, CyclicResponseData*))(Il2CppBase() + 0x1642934))(this, data);
	}
	template <typename R = void> R ShowChangeParentConfirm(CyclicResponseData* data) {
		return ((R (*)(CyclicEnterWindow*, CyclicResponseData*))(Il2CppBase() + 0x16444A8))(this, data);
	}
	template <typename R = void> R SendCycleRequest(RequestType* requestType) {
		return ((R (*)(CyclicEnterWindow*, RequestType*))(Il2CppBase() + 0x1641284))(this, requestType);
	}
	template <typename R = void> R ChangeServer(Il2CppString* region) {
		return ((R (*)(CyclicEnterWindow*, Il2CppString*))(Il2CppBase() + 0x1642010))(this, region);
	}
	template <typename R = void> R OnCycleResponseb__25_0(int32_t i) {
		return ((R (*)(CyclicEnterWindow*, int32_t))(Il2CppBase() + 0x1644DAC))(this, i);
	}
	template <typename R = void> R ShowRegisterCharb__26_0() {
		return ((R (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1644DB0))(this);
	}
	template <typename R = void> R ShowChangeServerb__27_0() {
		return ((R (*)(CyclicEnterWindow*))(Il2CppBase() + 0x1644DB8))(this);
	}

};

