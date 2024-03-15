#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISourceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISourceEntity"));
	}


	template <typename R = SourceComponent*> R get_source() {
		return ((R (*)(ISourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSource() {
		return ((R (*)(ISourceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSource(int32_t newId) {
		return ((R (*)(ISourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceSource(int32_t newId) {
		return ((R (*)(ISourceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveSource() {
		return ((R (*)(ISourceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

