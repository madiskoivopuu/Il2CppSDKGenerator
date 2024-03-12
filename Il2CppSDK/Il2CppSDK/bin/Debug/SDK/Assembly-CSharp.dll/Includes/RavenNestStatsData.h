#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& LastTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& LastEndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Stats() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RavenNestStatsData*, uintptr_t))(Il2CppBase() + 0x13901DC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RavenNestStatsData*, uintptr_t))(Il2CppBase() + 0x1390384))(this, reader);
	}

};

}
