#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneEffectPooler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneEffectPooler"));
	}

	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RuneItemEffect*> T& _destroyFX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = RuneItemEffect*> T& _mergeFX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = RuneItemEffect*> T& _armingFX() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = RuneItemEffect*> T& _onDragFX() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = RuneItemEffect*> T& _readyToMergeFX() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<RuneItemState*, Il2CppList<RuneItemEffect*>*>*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = RuneItemEffect*> T Get(RuneItemState* runeState, uintptr_t parent, Il2CppString* sfx) {
		return ((T (*)(RuneEffectPooler*, RuneItemState*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11A9F60))(this, runeState, parent, sfx);
	}
	template <typename T = void> T OnDeactivate(RuneItemEffect* effect) {
		return ((T (*)(RuneEffectPooler*, RuneItemEffect*))(Il2CppBase() + 0x11AA3AC))(this, effect);
	}
	template <typename T = void> T AddNew(RuneItemState* runeState) {
		return ((T (*)(RuneEffectPooler*, RuneItemState*))(Il2CppBase() + 0x11AA108))(this, runeState);
	}

};

