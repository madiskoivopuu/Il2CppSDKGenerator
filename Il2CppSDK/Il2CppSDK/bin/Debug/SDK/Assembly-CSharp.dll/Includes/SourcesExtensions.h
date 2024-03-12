#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SourcesExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SourcesExtensions"));
	}


	template <typename T = void> static T AddSource(uintptr_t effect, int32_t sourceId, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1485224))(0, effect, sourceId, count);
	}
	template <typename T = void> static T UpdateSource(uintptr_t effect, int32_t sourceId, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1485470))(0, effect, sourceId, count);
	}
	template <typename T = void> static T RemoveSource(uintptr_t effect, int32_t sourceId, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1485698))(0, effect, sourceId, count);
	}

};

}
