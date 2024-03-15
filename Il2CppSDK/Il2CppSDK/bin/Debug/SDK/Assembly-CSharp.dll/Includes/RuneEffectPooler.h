#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneEffectPooler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneEffectPooler"));
	}

	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RuneItemEffect*> R& _destroyFX() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = RuneItemEffect*> R& _mergeFX() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = RuneItemEffect*> R& _armingFX() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = RuneItemEffect*> R& _onDragFX() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = RuneItemEffect*> R& _readyToMergeFX() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppDictionary<RuneItemState*, Il2CppList<RuneItemEffect*>*>*& _effects() {
		return *(Il2CppDictionary<RuneItemState*, Il2CppList<RuneItemEffect*>*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = RuneItemEffect*> R Get(RuneItemState* runeState, uintptr_t parent, Il2CppString* sfx) {
		return ((R (*)(RuneEffectPooler*, RuneItemState*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11A9F60))(this, runeState, parent, sfx);
	}
	template <typename R = void> R OnDeactivate(RuneItemEffect* effect) {
		return ((R (*)(RuneEffectPooler*, RuneItemEffect*))(Il2CppBase() + 0x11AA3AC))(this, effect);
	}
	template <typename R = void> R AddNew(RuneItemState* runeState) {
		return ((R (*)(RuneEffectPooler*, RuneItemState*))(Il2CppBase() + 0x11AA108))(this, runeState);
	}

};

