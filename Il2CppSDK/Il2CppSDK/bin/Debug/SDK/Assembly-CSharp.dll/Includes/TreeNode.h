#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreeNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreeNode"));
	}

	template <typename T = TreePoint*> T& point() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = TreeNode*> T& left() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = TreeNode*> T& right() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsLeaf() {
		return ((T (*)(TreeNode*))(Il2CppBase() + 0x10C24D4))(this);
	}
	template <typename T = void> T GetNearest(TreeSettings* aSettings, int32_t aDepth, uintptr_t aPt, uintptr_t aClosest, uintptr_t aClosestDist) {
		return ((T (*)(TreeNode*, TreeSettings*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x10C27DC))(this, aSettings, aDepth, aPt, aClosest, aClosestDist);
	}
	template <typename T = void> T Draw(TreeSettings* aSettings, int32_t aDepth, uintptr_t aPt) {
		return ((T (*)(TreeNode*, TreeSettings*, int32_t, uintptr_t))(Il2CppBase() + 0x10C2A7C))(this, aSettings, aDepth, aPt);
	}

};

