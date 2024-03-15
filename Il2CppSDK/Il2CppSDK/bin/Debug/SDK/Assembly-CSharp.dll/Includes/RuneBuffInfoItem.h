#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class RuneBuffInfoItem : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneBuffInfoItem"));
	}

	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _moveDuration() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _moveCurve() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _slotIndex() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _startPoint() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = uintptr_t> R& _endPoint() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _moveCoroutine() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _transform() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& OnMoveEnd() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = void> R Bind(MagicParams parameters) {
		return ((R (*)(RuneBuffInfoItem*, MagicParams))(Il2CppBase() + 0x11A94AC))(this, parameters);
	}
	template <typename R = void> R Bind_1(MagicParams parameters, int32_t slotIndex, uintptr_t startPoint, uintptr_t endPoint, uintptr_t onMoveEnd) {
		return ((R (*)(RuneBuffInfoItem*, MagicParams, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x11A8BD0))(this, parameters, slotIndex, startPoint, endPoint, onMoveEnd);
	}
	template <typename R = void> R SetActive(bool isActive) {
		return ((R (*)(RuneBuffInfoItem*, bool))(Il2CppBase() + 0x11A9564))(this, isActive);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(RuneBuffInfoItem*))(Il2CppBase() + 0x11A9908))(this);
	}
	template <typename R = void> R StartMove() {
		return ((R (*)(RuneBuffInfoItem*))(Il2CppBase() + 0x11A98B0))(this);
	}
	template <typename R = uintptr_t> R MoveCoroutine() {
		return ((R (*)(RuneBuffInfoItem*))(Il2CppBase() + 0x11A996C))(this);
	}

};

