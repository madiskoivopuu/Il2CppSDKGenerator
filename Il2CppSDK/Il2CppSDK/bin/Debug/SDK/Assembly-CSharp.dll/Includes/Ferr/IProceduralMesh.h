#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IProceduralMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IProceduralMesh"));
	}


	template <typename T = uintptr_t> T get_MeshData() {
		return ((T (*)(IProceduralMesh*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MeshFilter() {
		return ((T (*)(IProceduralMesh*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Build(bool aFullBuild) {
		return ((T (*)(IProceduralMesh*, bool))(Il2CppBase() + 0x0))(this, aFullBuild);
	}

};

}
