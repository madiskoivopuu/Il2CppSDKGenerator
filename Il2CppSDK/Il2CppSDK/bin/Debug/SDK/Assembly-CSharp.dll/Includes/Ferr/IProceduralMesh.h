#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class IProceduralMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "IProceduralMesh"));
	}


	template <typename R = uintptr_t> R get_MeshData() {
		return ((R (*)(IProceduralMesh*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_MeshFilter() {
		return ((R (*)(IProceduralMesh*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Build(bool aFullBuild) {
		return ((R (*)(IProceduralMesh*, bool))(Il2CppBase() + 0x0))(this, aFullBuild);
	}

};

}
