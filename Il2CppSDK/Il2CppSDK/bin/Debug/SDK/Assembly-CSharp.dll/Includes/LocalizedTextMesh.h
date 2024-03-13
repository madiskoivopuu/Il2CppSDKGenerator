#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizedTextMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizedTextMesh"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetText() {
		return ((T (*)(LocalizedTextMesh*))(Il2CppBase() + 0x179C1FC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LocalizedTextMesh*))(Il2CppBase() + 0x179C3A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LocalizedTextMesh*))(Il2CppBase() + 0x179C458))(this);
	}

};

