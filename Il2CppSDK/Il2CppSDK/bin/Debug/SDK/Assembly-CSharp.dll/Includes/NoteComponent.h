#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoteComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoteComponent"));
	}

	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Background() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(NoteComponent*, Il2CppObject*))(Il2CppBase() + 0x13B6680))(this, targetObject);
	}

};

