#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanvasMeshRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanvasMeshRenderer"));
	}

	template <typename R = uintptr_t> R& refMesh() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& copyRenderMaterial() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	 Il2CppList<uintptr_t>*& vertices() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0xE0);
	}
	 Il2CppList<int32_t>*& indices() {
		return *(Il2CppList<int32_t>**)((uintptr_t)this + 0xE8);
	}
	 Il2CppList<uintptr_t>*& UV() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0xF0);
	}
	 Il2CppList<uintptr_t>*& colors() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0xF8);
	}
	 Il2CppList<uintptr_t>*& UIvertices() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& vh() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& meshRenderer() {
		return *(R*)((uintptr_t)this + 0x110);
	}

	template <typename R = uintptr_t> R get_materialForRendering() {
		return ((R (*)(CanvasMeshRenderer*))(Il2CppBase() + 0x15B6410))(this);
	}
	template <typename R = void> R OnPopulateMesh(uintptr_t vh) {
		return ((R (*)(CanvasMeshRenderer*, uintptr_t))(Il2CppBase() + 0x15B64E4))(this, vh);
	}
	template <typename R = uintptr_t> R get_mainTexture() {
		return ((R (*)(CanvasMeshRenderer*))(Il2CppBase() + 0x15B68A0))(this);
	}

};

