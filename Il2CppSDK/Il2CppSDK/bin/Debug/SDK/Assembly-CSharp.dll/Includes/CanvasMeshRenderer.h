#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanvasMeshRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanvasMeshRenderer"));
	}

	template <typename T = uintptr_t> T& refMesh() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& copyRenderMaterial() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<int32_t>*> T& indices() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& UV() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& UIvertices() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& vh() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& meshRenderer() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = uintptr_t> T get_materialForRendering() {
		return ((T (*)(CanvasMeshRenderer*))(Il2CppBase() + 0x15B6410))(this);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t vh) {
		return ((T (*)(CanvasMeshRenderer*, uintptr_t))(Il2CppBase() + 0x15B64E4))(this, vh);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(CanvasMeshRenderer*))(Il2CppBase() + 0x15B68A0))(this);
	}

};

