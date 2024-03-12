#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoModeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoModeSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& AggroRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _miningTargets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _resources() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AutoModeSystem*))(Il2CppBase() + 0x1A642A4))(this);
	}
	template <typename T = void> T SetAggroTarget(int32_t id) {
		return ((T (*)(AutoModeSystem*, int32_t))(Il2CppBase() + 0x1A64484))(this, id);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AutoModeSystem*))(Il2CppBase() + 0x1A644E0))(this);
	}
	template <typename T = uintptr_t> T SelectAttackTarget(uintptr_t entity, void* entitiesNear) {
		return ((T (*)(AutoModeSystem*, uintptr_t, void*))(Il2CppBase() + 0x1A64B64))(this, entity, entitiesNear);
	}
	template <typename T = void*> T SelectResourceTarget(uintptr_t entity) {
		return ((T (*)(AutoModeSystem*, uintptr_t))(Il2CppBase() + 0x1A650B4))(this, entity);
	}

};

}
