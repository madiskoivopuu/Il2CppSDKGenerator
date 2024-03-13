#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetClassRendererController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PuppetClassRendererController"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PuppetHighlight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _puppetPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _hlOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _randomizeAnimation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = GameEntity*> T& _puppetEntity() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _viewContainer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _puppetView() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _puppetAnimator() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _isSelected() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _puppetHLAnimator() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& _puppetSfx() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& _soundId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Action1PuppetClassRendererController*>*> T& _onClick() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T add__onClick(Action1PuppetClassRendererController*>* value) {
		return ((T (*)(PuppetClassRendererController*, Action1PuppetClassRendererController*>*))(Il2CppBase() + 0x11B1484))(this, value);
	}
	template <typename T = void> T remove__onClick(Action1PuppetClassRendererController*>* value) {
		return ((T (*)(PuppetClassRendererController*, Action1PuppetClassRendererController*>*))(Il2CppBase() + 0x11B1524))(this, value);
	}
	template <typename T = Il2CppString*> T get_Blueprint() {
		return ((T (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B15C4))(this);
	}
	template <typename T = void> T set_Blueprint(Il2CppString* value) {
		return ((T (*)(PuppetClassRendererController*, Il2CppString*))(Il2CppBase() + 0x11B15CC))(this, value);
	}
	template <typename T = void> T ShowPuppet(Il2CppString* className, float centerOffset, float angle, Action1PuppetClassRendererController*>* OnClick) {
		return ((T (*)(PuppetClassRendererController*, Il2CppString*, float, float, Action1PuppetClassRendererController*>*))(Il2CppBase() + 0x11B15D4))(this, className, centerOffset, angle, OnClick);
	}
	template <typename T = void> T HidePuppet() {
		return ((T (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B21C8))(this);
	}
	template <typename T = void> T KillPuppet() {
		return ((T (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B231C))(this);
	}
	template <typename T = void> T Click() {
		return ((T (*)(PuppetClassRendererController*))(Il2CppBase() + 0x11B247C))(this);
	}
	template <typename T = void> T OnOtherClick(PuppetClassRendererController* controller) {
		return ((T (*)(PuppetClassRendererController*, PuppetClassRendererController*))(Il2CppBase() + 0x11B2688))(this, controller);
	}

};

