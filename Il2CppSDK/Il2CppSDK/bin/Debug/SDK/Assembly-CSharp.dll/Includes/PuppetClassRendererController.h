#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetClassRendererController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetClassRendererController"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PuppetHighlight() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _puppetPosition() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _hlOffset() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = bool> R& _randomizeAnimation() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = GameEntity*> R& _puppetEntity() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _viewContainer() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _puppetView() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _puppetAnimator() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& _isSelected() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _puppetHLAnimator() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _transform() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& _puppetSfx() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uint32_t> R& _soundId() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	 Action1<PuppetClassRendererController*>*& _onClick() {
		return *(Action1<PuppetClassRendererController*>**)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R add__onClick(Action1<PuppetClassRendererController*>* value) {
		return ((R (*)(PuppetClassRendererController*, Action1<PuppetClassRendererController*>*))(Il2CppBase() + 0x11B1484))(this, value);
	}
	template <typename R = void> R remove__onClick(Action1<PuppetClassRendererController*>* value) {
		return ((R (*)(PuppetClassRendererController*, Action1<PuppetClassRendererController*>*))(Il2CppBase() + 0x11B1524))(this, value);
	}
	template <typename R = Il2CppString*> R get_Blueprint() {
		return ((R (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B15C4))(this);
	}
	template <typename R = void> R set_Blueprint(Il2CppString* value) {
		return ((R (*)(PuppetClassRendererController*, Il2CppString*))(Il2CppBase() + 0x11B15CC))(this, value);
	}
	template <typename R = void> R ShowPuppet(Il2CppString* className, float centerOffset, float angle, Action1<PuppetClassRendererController*>* OnClick) {
		return ((R (*)(PuppetClassRendererController*, Il2CppString*, float, float, Action1<PuppetClassRendererController*>*))(Il2CppBase() + 0x11B15D4))(this, className, centerOffset, angle, OnClick);
	}
	template <typename R = void> R HidePuppet() {
		return ((R (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B21C8))(this);
	}
	template <typename R = void> R KillPuppet() {
		return ((R (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B231C))(this);
	}
	template <typename R = void> R Click() {
		return ((R (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B247C))(this);
	}
	template <typename R = void> R OnOtherClick(PuppetClassRendererController* controller) {
		return ((R (*)(PuppetClassRendererController*, PuppetClassRendererController*))(Il2CppBase() + 0x11B2688))(this, controller);
	}

};

