#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsComponent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Stats() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& LastEndTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& LastTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T GetStatIndex(int64_t playerId, int64_t enterTime) {
		return ((T (*)(RavenNestStatsComponent*, int64_t, int64_t))(Il2CppBase() + 0x138FBBC))(this, playerId, enterTime);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RavenNestStatsComponent*, uintptr_t))(Il2CppBase() + 0x138FCB8))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RavenNestStatsComponent*, uintptr_t))(Il2CppBase() + 0x138FED4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RavenNestStatsComponent*, uintptr_t))(Il2CppBase() + 0x13900E8))(this, writer);
	}

};

}
