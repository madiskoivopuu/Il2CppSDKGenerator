#pragma once

#include "../UnityEngine_UI/UnityEngine_UI/MaskableGraphic.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material; }
namespace UnityEngine_UI { class VertexHelper; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }

class CanvasMeshRenderer : public MaskableGraphic {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanvasMeshRenderer"));
	}

	UnityEngine::Mesh*& refMesh() {
		return *(UnityEngine::Mesh**)((uintptr_t)this + 0xD0);
	}

	UnityEngine::Material*& copyRenderMaterial() {
		return *(UnityEngine::Material**)((uintptr_t)this + 0xD8);
	}

	Il2CppList<Vector3>*& vertices() {
		return *(Il2CppList<Vector3>**)((uintptr_t)this + 0xE0);
	}

	Il2CppList<int32_t>*& indices() {
		return *(Il2CppList<int32_t>**)((uintptr_t)this + 0xE8);
	}

	Il2CppList<Vector4>*& UV() {
		return *(Il2CppList<Vector4>**)((uintptr_t)this + 0xF0);
	}

	Il2CppList<Color>*& colors() {
		return *(Il2CppList<Color>**)((uintptr_t)this + 0xF8);
	}

	Il2CppList<UIVertex>*& UIvertices() {
		return *(Il2CppList<UIVertex>**)((uintptr_t)this + 0x100);
	}

	UnityEngine_UI::VertexHelper*& vh() {
		return *(UnityEngine_UI::VertexHelper**)((uintptr_t)this + 0x108);
	}

	UnityEngine::MeshRenderer*& meshRenderer() {
		return *(UnityEngine::MeshRenderer**)((uintptr_t)this + 0x110);
	}

};};
