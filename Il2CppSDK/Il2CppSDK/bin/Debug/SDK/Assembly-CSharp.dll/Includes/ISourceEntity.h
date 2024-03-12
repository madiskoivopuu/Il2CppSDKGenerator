#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISourceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISourceEntity"));
	}


	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(ISourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSource() {
		return ((T (*)(ISourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSource(int32_t newId) {
		return ((T (*)(ISourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceSource(int32_t newId) {
		return ((T (*)(ISourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveSource() {
		return ((T (*)(ISourceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
