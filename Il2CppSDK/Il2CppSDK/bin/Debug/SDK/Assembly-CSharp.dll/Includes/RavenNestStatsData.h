#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& LastTime() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& LastEndTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Il2CppList<Stat*>*& Stats() {
		return *(Il2CppList<Stat*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RavenNestStatsData*, uintptr_t))(Il2CppBase() + 0x13901DC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RavenNestStatsData*, uintptr_t))(Il2CppBase() + 0x1390384))(this, reader);
	}

};

