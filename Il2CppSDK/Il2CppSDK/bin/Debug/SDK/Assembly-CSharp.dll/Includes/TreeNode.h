#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreeNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreeNode"));
	}

	template <typename R = TreePoint*> R& point() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = TreeNode*> R& left() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = TreeNode*> R& right() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = bool> R get_IsLeaf() {
		return ((R (*)(TreeNode*))(Il2CppBase() + 0x10C24D4))(this);
	}
	template <typename R = void> R GetNearest(TreeSettings* aSettings, int32_t aDepth, uintptr_t aPt, uintptr_t aClosest, uintptr_t aClosestDist) {
		return ((R (*)(TreeNode*, TreeSettings*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x10C27DC))(this, aSettings, aDepth, aPt, aClosest, aClosestDist);
	}
	template <typename R = void> R Draw(TreeSettings* aSettings, int32_t aDepth, uintptr_t aPt) {
		return ((R (*)(TreeNode*, TreeSettings*, int32_t, uintptr_t))(Il2CppBase() + 0x10C2A7C))(this, aSettings, aDepth, aPt);
	}

};

