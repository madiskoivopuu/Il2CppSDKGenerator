#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetLanguageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetLanguageData"));
	}

	template <typename R = Il2CppString*> R& Language() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SetLanguageData*, uintptr_t))(Il2CppBase() + 0x1624524))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SetLanguageData*, uintptr_t))(Il2CppBase() + 0x1624568))(this, reader);
	}

};

