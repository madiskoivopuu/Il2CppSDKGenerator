#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizedTextMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizedTextMesh"));
	}

	template <typename R = Il2CppString*> R& Key() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R SetText() {
		return ((R (*)(LocalizedTextMesh*))(Il2CppBase() + 0x179C1FC))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(LocalizedTextMesh*))(Il2CppBase() + 0x179C3A8))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(LocalizedTextMesh*))(Il2CppBase() + 0x179C458))(this);
	}

};

