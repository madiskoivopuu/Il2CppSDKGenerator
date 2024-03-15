#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowTempBuffInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowTempBuffInfoData"));
	}

	template <typename R = Il2CppString*> R& uniqueLookup() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ShowTempBuffInfoData*, uintptr_t))(Il2CppBase() + 0x147EE58))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ShowTempBuffInfoData*, uintptr_t))(Il2CppBase() + 0x147EE94))(this, reader);
	}

};

