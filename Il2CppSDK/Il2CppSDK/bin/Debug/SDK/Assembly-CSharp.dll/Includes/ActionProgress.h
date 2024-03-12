#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionProgress"));
	}

	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DefaultSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Icons() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _item() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _currentIcon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _iconsDict() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T GetRelevantAction(uintptr_t entity) {
		return ((T (*)(ActionProgress*, uintptr_t))(Il2CppBase() + 0x18AA29C))(this, entity);
	}
	template <typename T = void> T SetIcon(Il2CppString* interactIcon) {
		return ((T (*)(ActionProgress*, Il2CppString*))(Il2CppBase() + 0x18AA3EC))(this, interactIcon);
	}
	template <typename T = void> T OnUpdateDraw(uintptr_t entity) {
		return ((T (*)(ActionProgress*, uintptr_t))(Il2CppBase() + 0x18AA660))(this, entity);
	}
	template <typename T = void> T UpdateIcon(uintptr_t action, uintptr_t entity, uintptr_t target) {
		return ((T (*)(ActionProgress*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18AAA88))(this, action, entity, target);
	}
	template <typename T = void> T UpdateProgressBar(uintptr_t action, uintptr_t entity) {
		return ((T (*)(ActionProgress*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18AAD98))(this, action, entity);
	}

};

}
