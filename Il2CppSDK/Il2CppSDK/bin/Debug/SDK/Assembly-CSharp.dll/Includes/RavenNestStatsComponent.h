#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsComponent"));
	}

	 Il2CppList<Stat*>*& Stats() {
		return *(Il2CppList<Stat*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& LastEndTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& LastTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = int32_t> R GetStatIndex(int64_t playerId, int64_t enterTime) {
		return ((R (*)(RavenNestStatsComponent*, int64_t, int64_t))(Il2CppBase() + 0x138FBBC))(this, playerId, enterTime);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RavenNestStatsComponent*, Il2CppObject*))(Il2CppBase() + 0x138FCB8))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RavenNestStatsComponent*, uintptr_t))(Il2CppBase() + 0x138FED4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RavenNestStatsComponent*, uintptr_t))(Il2CppBase() + 0x13900E8))(this, writer);
	}

};

