#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoofsAndWalls
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoofsAndWalls"));
	}

	template <typename T = int32_t> T& Width() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& ROOF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _roofs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_Width() {
		return ((T (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A371C))(this);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A3724))(this);
	}
	template <typename T = DoorsAndWalls*> T get__doorsAndWalls() {
		return ((T (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A372C))(this);
	}
	template <typename T = void> T Fill() {
		return ((T (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A3838))(this);
	}

};

