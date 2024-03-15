#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionProgress"));
	}

	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Progress() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& DefaultSprite() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<Icon*>*> R& Icons() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ItemEntity*> R& _item() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& _currentIcon() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppDictionary<Il2CppString*, uintptr_t>*& _iconsDict() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)this + 0x48);
	}

	template <typename R = ActionEntity*> R GetRelevantAction(GameEntity* entity) {
		return ((R (*)(ActionProgress*, GameEntity*))(Il2CppBase() + 0x18AA29C))(this, entity);
	}
	template <typename R = void> R SetIcon(Il2CppString* interactIcon) {
		return ((R (*)(ActionProgress*, Il2CppString*))(Il2CppBase() + 0x18AA3EC))(this, interactIcon);
	}
	template <typename R = void> R OnUpdateDraw(GameEntity* entity) {
		return ((R (*)(ActionProgress*, GameEntity*))(Il2CppBase() + 0x18AA660))(this, entity);
	}
	template <typename R = void> R UpdateIcon(ActionEntity* action, GameEntity* entity, GameEntity* target) {
		return ((R (*)(ActionProgress*, ActionEntity*, GameEntity*, GameEntity*))(Il2CppBase() + 0x18AAA88))(this, action, entity, target);
	}
	template <typename R = void> R UpdateProgressBar(ActionEntity* action, GameEntity* entity) {
		return ((R (*)(ActionProgress*, ActionEntity*, GameEntity*))(Il2CppBase() + 0x18AAD98))(this, action, entity);
	}

};

