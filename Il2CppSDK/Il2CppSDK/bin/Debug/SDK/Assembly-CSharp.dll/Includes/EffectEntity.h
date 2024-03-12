#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectEntity"));
	}

	template <typename T = uintptr_t> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& HideHelper() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& followCameraComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& hideToolComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& infinityComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& invisibleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& minimapAlwaysVisibleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& minimapArrowPingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& nakedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& onCollisionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& onDeathComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& playOutComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& showCountComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA88D0))(this);
	}
	template <typename T = void> T set_GameObject(uintptr_t value) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA88D8))(this, value);
	}
	template <typename T = uintptr_t> T get_HideHelper() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA88E0))(this);
	}
	template <typename T = void> T set_HideHelper(uintptr_t value) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA88E8))(this, value);
	}
	template <typename T = void> T AddHideHelper(uintptr_t hideHelper) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA810C))(this, hideHelper);
	}
	template <typename T = void> T AddView(uintptr_t go) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA58C8))(this, go);
	}
	template <typename T = void> T RemoveView() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA88F0))(this);
	}
	template <typename T = void> static T OnEntityWillBeDestroyed(uintptr_t context, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AA8924))(0, context, entity);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA8A18))(this);
	}
	template <typename T = uintptr_t> T get_activateNotify() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA78F4))(this);
	}
	template <typename T = bool> T get_hasActivateNotify() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4FA8))(this);
	}
	template <typename T = void> T AddActivateNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(EffectEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AA8C90))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T ReplaceActivateNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(EffectEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AA8DF8))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T RemoveActivateNotify() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA8F60))(this);
	}
	template <typename T = uintptr_t> T get_ambient() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7714))(this);
	}
	template <typename T = bool> T get_hasAmbient() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7708))(this);
	}
	template <typename T = void> T AddAmbient(Il2CppString* newValue) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA8F6C))(this, newValue);
	}
	template <typename T = void> T ReplaceAmbient(Il2CppString* newValue) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9080))(this, newValue);
	}
	template <typename T = void> T RemoveAmbient() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA9194))(this);
	}
	template <typename T = uintptr_t> T get_animatorArmed() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA1064))(this);
	}
	template <typename T = bool> T get_hasAnimatorArmed() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7AA4))(this);
	}
	template <typename T = void> T AddAnimatorArmed(int32_t newValue) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA91A0))(this, newValue);
	}
	template <typename T = void> T ReplaceAnimatorArmed(int32_t newValue) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA92A4))(this, newValue);
	}
	template <typename T = void> T RemoveAnimatorArmed() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA93A8))(this);
	}
	template <typename T = uintptr_t> T get_animator() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7A1C))(this);
	}
	template <typename T = bool> T get_hasAnimator() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7A10))(this);
	}
	template <typename T = void> T AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1AA93B4))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1AA955C))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T RemoveAnimator() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA9704))(this);
	}
	template <typename T = uintptr_t> T get_animatorSync() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA9710))(this);
	}
	template <typename T = bool> T get_hasAnimatorSync() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA9798))(this);
	}
	template <typename T = void> T AddAnimatorSync(Il2CppArray<uintptr_t>* newBoolNames, Il2CppArray<uintptr_t>* newIntNames, Il2CppArray<uintptr_t>* newFloats) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AA97A4))(this, newBoolNames, newIntNames, newFloats);
	}
	template <typename T = void> T ReplaceAnimatorSync(Il2CppArray<uintptr_t>* newBoolNames, Il2CppArray<uintptr_t>* newIntNames, Il2CppArray<uintptr_t>* newFloats) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AA98E8))(this, newBoolNames, newIntNames, newFloats);
	}
	template <typename T = void> T RemoveAnimatorSync() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA9A2C))(this);
	}
	template <typename T = uintptr_t> T get_attach() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA8084))(this);
	}
	template <typename T = bool> T get_hasAttach() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA77B4))(this);
	}
	template <typename T = void> T AddAttach(uintptr_t newType) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA9A38))(this, newType);
	}
	template <typename T = void> T ReplaceAttach(uintptr_t newType) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA9B3C))(this, newType);
	}
	template <typename T = void> T RemoveAttach() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA9C40))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7E34))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA8C78))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9C4C))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9D60))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA9E74))(this);
	}
	template <typename T = uintptr_t> T get_bubble() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7BF0))(this);
	}
	template <typename T = bool> T get_hasBubble() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7BE4))(this);
	}
	template <typename T = void> T AddBubble(Il2CppString* newText) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9E80))(this, newText);
	}
	template <typename T = void> T ReplaceBubble(Il2CppString* newText) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9F94))(this, newText);
	}
	template <typename T = void> T RemoveBubble() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA0A8))(this);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA55BC))(this);
	}
	template <typename T = bool> T get_hasColor() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA55B0))(this);
	}
	template <typename T = void> T AddColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((T (*)(EffectEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1AAA0B4))(this, newPriority, newHexColor);
	}
	template <typename T = void> T ReplaceColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((T (*)(EffectEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1AAA1D0))(this, newPriority, newHexColor);
	}
	template <typename T = void> T RemoveColor() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA2EC))(this);
	}
	template <typename T = uintptr_t> T get_count() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA786C))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7860))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAA2F8))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA54AC))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA3FC))(this);
	}
	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA408))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA75F8))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AA7604))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAA490))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA594))(this);
	}
	template <typename T = uintptr_t> T get_effectByCount() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA5A0))(this);
	}
	template <typename T = bool> T get_hasEffectByCount() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA628))(this);
	}
	template <typename T = void> T AddEffectByCount(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAA634))(this, newNames);
	}
	template <typename T = void> T ReplaceEffectByCount(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAA748))(this, newNames);
	}
	template <typename T = void> T RemoveEffectByCount() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAA85C))(this);
	}
	template <typename T = uintptr_t> T get_effectContainer() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4F14))(this);
	}
	template <typename T = bool> T get_hasEffectContainer() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4F08))(this);
	}
	template <typename T = void> T AddEffectContainer(Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAA868))(this, newItems);
	}
	template <typename T = void> T ReplaceEffectContainer(Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAA97C))(this, newItems);
	}
	template <typename T = void> T RemoveEffectContainer() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAAA90))(this);
	}
	template <typename T = bool> T get_isFollowCamera() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA77C0))(this);
	}
	template <typename T = void> T set_isFollowCamera(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAAA9C))(this, value);
	}
	template <typename T = uintptr_t> T get_grabView() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA58D0))(this);
	}
	template <typename T = bool> T get_hasGrabView() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA58BC))(this);
	}
	template <typename T = void> T AddGrabView(Il2CppString* newAnimatorKey) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAABB4))(this, newAnimatorKey);
	}
	template <typename T = void> T ReplaceGrabView(Il2CppString* newAnimatorKey) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAACC8))(this, newAnimatorKey);
	}
	template <typename T = void> T RemoveGrabView() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAADDC))(this);
	}
	template <typename T = bool> T get_isHideTool() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7AB0))(this);
	}
	template <typename T = void> T set_isHideTool(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAADE8))(this, value);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4DEC))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAAF00))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA53A8))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAAF0C))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAB010))(this);
	}
	template <typename T = bool> T get_isInfinity() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA75EC))(this);
	}
	template <typename T = void> T set_isInfinity(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB01C))(this, value);
	}
	template <typename T = bool> T get_isInvisible() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7448))(this);
	}
	template <typename T = void> T set_isInvisible(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB134))(this, value);
	}
	template <typename T = uintptr_t> T get_localRotation() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7EC8))(this);
	}
	template <typename T = bool> T get_hasLocalRotation() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7EBC))(this);
	}
	template <typename T = void> T AddLocalRotation(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAB24C))(this, newValue);
	}
	template <typename T = void> T ReplaceLocalRotation(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAB350))(this, newValue);
	}
	template <typename T = void> T RemoveLocalRotation() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAB454))(this);
	}
	template <typename T = bool> T get_isMinimapAlwaysVisible() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA56D8))(this);
	}
	template <typename T = void> T set_isMinimapAlwaysVisible(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB460))(this, value);
	}
	template <typename T = uintptr_t> T get_minimapArrow() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAB578))(this);
	}
	template <typename T = bool> T get_hasMinimapArrow() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAB600))(this);
	}
	template <typename T = void> T AddMinimapArrow(uintptr_t newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(EffectEntity*, uintptr_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x1AAB60C))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T ReplaceMinimapArrow(uintptr_t newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(EffectEntity*, uintptr_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x1AAB748))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T RemoveMinimapArrow() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAB884))(this);
	}
	template <typename T = bool> T get_isMinimapArrowPing() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAB890))(this);
	}
	template <typename T = void> T set_isMinimapArrowPing(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB89C))(this, value);
	}
	template <typename T = uintptr_t> T get_minimap() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7F5C))(this);
	}
	template <typename T = bool> T get_hasMinimap() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7F50))(this);
	}
	template <typename T = void> T AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(EffectEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAB9B4))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(EffectEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AABAFC))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T RemoveMinimap() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AABC44))(this);
	}
	template <typename T = bool> T get_isNaked() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA779C))(this);
	}
	template <typename T = void> T set_isNaked(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AABC50))(this, value);
	}
	template <typename T = uintptr_t> T get_notification() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA77D8))(this);
	}
	template <typename T = bool> T get_hasNotification() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA77CC))(this);
	}
	template <typename T = void> T AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(EffectEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AABD68))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(EffectEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AABED4))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T RemoveNotification() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC040))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC04C))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC0D4))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAC0E0))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAC1F4))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC308))(this);
	}
	template <typename T = bool> T get_isOnCollision() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7DA0))(this);
	}
	template <typename T = void> T set_isOnCollision(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAC314))(this, value);
	}
	template <typename T = bool> T get_isOnDeath() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC42C))(this);
	}
	template <typename T = void> T set_isOnDeath(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AA1750))(this, value);
	}
	template <typename T = uintptr_t> T get_other() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4D64))(this);
	}
	template <typename T = bool> T get_hasOther() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4D58))(this);
	}
	template <typename T = void> T AddOther(int32_t newId) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA713C))(this, newId);
	}
	template <typename T = void> T ReplaceOther(int32_t newId) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA5298))(this, newId);
	}
	template <typename T = void> T RemoveOther() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA539C))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC438))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA77A8))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA7240))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAC4C0))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC5C4))(this);
	}
	template <typename T = uintptr_t> T get_personal() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC5D0))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4F9C))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AAC658))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AAC75C))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC860))(this);
	}
	template <typename T = bool> T get_isPlayOut() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC86C))(this);
	}
	template <typename T = void> T set_isPlayOut(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAC878))(this, value);
	}
	template <typename T = uintptr_t> T get_polymorph() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAC990))(this);
	}
	template <typename T = bool> T get_hasPolymorph() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA8078))(this);
	}
	template <typename T = void> T AddPolymorph(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AACA18))(this, newName);
	}
	template <typename T = void> T ReplacePolymorph(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AACB2C))(this, newName);
	}
	template <typename T = void> T RemovePolymorph() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AACC40))(this);
	}
	template <typename T = uintptr_t> T get_prefab() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7DAC))(this);
	}
	template <typename T = bool> T get_hasPrefab() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA5958))(this);
	}
	template <typename T = void> T AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, uintptr_t newResourceType) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x1AACC4C))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, uintptr_t newResourceType) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x1AA5778))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T RemovePrefab() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AACD90))(this);
	}
	template <typename T = uintptr_t> T get_prefabs() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA56F0))(this);
	}
	template <typename T = bool> T get_hasPrefabs() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA56E4))(this);
	}
	template <typename T = void> T AddPrefabs(Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AACD9C))(this, newItems);
	}
	template <typename T = void> T ReplacePrefabs(Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AACEB0))(this, newItems);
	}
	template <typename T = void> T RemovePrefabs() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AACFC4))(this);
	}
	template <typename T = uintptr_t> T get_radius() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4E80))(this);
	}
	template <typename T = bool> T get_hasRadius() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4E74))(this);
	}
	template <typename T = void> T AddRadius(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AACFD0))(this, newValue);
	}
	template <typename T = void> T ReplaceRadius(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AA7344))(this, newValue);
	}
	template <typename T = void> T RemoveRadius() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAD0D4))(this);
	}
	template <typename T = uintptr_t> T get_rotation() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAD0E0))(this);
	}
	template <typename T = bool> T get_hasRotation() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAD168))(this);
	}
	template <typename T = void> T AddRotation(float newAngle) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAD174))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotation(float newAngle) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAD278))(this, newAngle);
	}
	template <typename T = void> T RemoveRotation() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAD37C))(this);
	}
	template <typename T = uintptr_t> T get_shake() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7988))(this);
	}
	template <typename T = bool> T get_hasShake() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA797C))(this);
	}
	template <typename T = void> T AddShake(Il2CppString* newTriggerName, Il2CppString* newBoolName, float newMaxRadius, Il2CppString* newCameraUniqueLookup) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, float, Il2CppString*))(Il2CppBase() + 0x1AAD388))(this, newTriggerName, newBoolName, newMaxRadius, newCameraUniqueLookup);
	}
	template <typename T = void> T ReplaceShake(Il2CppString* newTriggerName, Il2CppString* newBoolName, float newMaxRadius, Il2CppString* newCameraUniqueLookup) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, float, Il2CppString*))(Il2CppBase() + 0x1AAD4DC))(this, newTriggerName, newBoolName, newMaxRadius, newCameraUniqueLookup);
	}
	template <typename T = void> T RemoveShake() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAD630))(this);
	}
	template <typename T = bool> T get_isShowCount() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAD63C))(this);
	}
	template <typename T = void> T set_isShowCount(bool value) {
		return ((T (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAD648))(this, value);
	}
	template <typename T = uintptr_t> T get_single() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA5054))(this);
	}
	template <typename T = bool> T get_hasSingle() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA5048))(this);
	}
	template <typename T = void> T AddSingle(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAD760))(this, newName);
	}
	template <typename T = void> T ReplaceSingle(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAD874))(this, newName);
	}
	template <typename T = void> T RemoveSingle() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAD988))(this);
	}
	template <typename T = uintptr_t> T get_socket() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7D18))(this);
	}
	template <typename T = bool> T get_hasSocket() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7D0C))(this);
	}
	template <typename T = void> T AddSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((T (*)(EffectEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1AAD994))(this, newName, newIgnoreRotation);
	}
	template <typename T = void> T ReplaceSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((T (*)(EffectEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1AADAB4))(this, newName, newIgnoreRotation);
	}
	template <typename T = void> T RemoveSocket() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AADBD4))(this);
	}
	template <typename T = uintptr_t> T get_sound() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7460))(this);
	}
	template <typename T = bool> T get_hasSound() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7454))(this);
	}
	template <typename T = void> T AddSound(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AADBE0))(this, newName);
	}
	template <typename T = void> T ReplaceSound(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AADCF4))(this, newName);
	}
	template <typename T = void> T RemoveSound() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AADE08))(this);
	}
	template <typename T = uintptr_t> T get_soundId() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AADE14))(this);
	}
	template <typename T = bool> T get_hasSoundId() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AADE9C))(this);
	}
	template <typename T = void> T AddSoundId(uint32_t newValue) {
		return ((T (*)(EffectEntity*, uint32_t))(Il2CppBase() + 0x1AA74E8))(this, newValue);
	}
	template <typename T = void> T ReplaceSoundId(uint32_t newValue) {
		return ((T (*)(EffectEntity*, uint32_t))(Il2CppBase() + 0x1AADEA8))(this, newValue);
	}
	template <typename T = void> T RemoveSoundId() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AADFAC))(this);
	}
	template <typename T = uintptr_t> T get_sources() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AADFB8))(this);
	}
	template <typename T = bool> T get_hasSources() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAE040))(this);
	}
	template <typename T = void> T AddSources(Il2CppDictionary<int32_t, int32_t>* newValues) {
		return ((T (*)(EffectEntity*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x1AAE04C))(this, newValues);
	}
	template <typename T = void> T ReplaceSources(Il2CppDictionary<int32_t, int32_t>* newValues) {
		return ((T (*)(EffectEntity*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x1AAE160))(this, newValues);
	}
	template <typename T = void> T RemoveSources() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAE274))(this);
	}
	template <typename T = uintptr_t> T get_spawnTrigger() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7B5C))(this);
	}
	template <typename T = bool> T get_hasSpawnTrigger() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7B50))(this);
	}
	template <typename T = void> T AddSpawnTrigger(Il2CppString* newCondition, Il2CppString* newTargetTriggerName, Il2CppString* newEffectTriggerName) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE280))(this, newCondition, newTargetTriggerName, newEffectTriggerName);
	}
	template <typename T = void> T ReplaceSpawnTrigger(Il2CppString* newCondition, Il2CppString* newTargetTriggerName, Il2CppString* newEffectTriggerName) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE3C4))(this, newCondition, newTargetTriggerName, newEffectTriggerName);
	}
	template <typename T = void> T RemoveSpawnTrigger() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAE508))(this);
	}
	template <typename T = uintptr_t> T get_startCondition() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4FC0))(this);
	}
	template <typename T = bool> T get_hasStartCondition() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4FB4))(this);
	}
	template <typename T = void> T AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE514))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE63C))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveStartCondition() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAE764))(this);
	}
	template <typename T = uintptr_t> T get_startTime() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA0FDC))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA0FD0))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AAE770))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AA4A34))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAE874))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAE880))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAE908))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAE914))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(EffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AAEA28))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAEB3C))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA4CD0))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA8C84))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA7038))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAEB48))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAEC4C))(this);
	}
	template <typename T = uintptr_t> T get_targetMarker() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAEC58))(this);
	}
	template <typename T = bool> T get_hasTargetMarker() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAECE0))(this);
	}
	template <typename T = void> T AddTargetMarker(int32_t newPriority, Il2CppArray<uintptr_t>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(EffectEntity*, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAECEC))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceTargetMarker(int32_t newPriority, Il2CppArray<uintptr_t>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(EffectEntity*, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAEE98))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveTargetMarker() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAF044))(this);
	}
	template <typename T = uintptr_t> T get_toolFx() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7AC8))(this);
	}
	template <typename T = bool> T get_hasToolFx() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7ABC))(this);
	}
	template <typename T = void> T AddToolFx(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAF050))(this, newName);
	}
	template <typename T = void> T ReplaceToolFx(Il2CppString* newName) {
		return ((T (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAF164))(this, newName);
	}
	template <typename T = void> T RemoveToolFx() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAF278))(this);
	}
	template <typename T = uintptr_t> T get_trail() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA50E8))(this);
	}
	template <typename T = bool> T get_hasTrail() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA50DC))(this);
	}
	template <typename T = void> T AddTrail(int32_t newTargetId, Il2CppVector3 newTargetPosition) {
		return ((T (*)(EffectEntity*, int32_t, Il2CppVector3))(Il2CppBase() + 0x1AAF284))(this, newTargetId, newTargetPosition);
	}
	template <typename T = void> T ReplaceTrail(int32_t newTargetId, Il2CppVector3 newTargetPosition) {
		return ((T (*)(EffectEntity*, int32_t, Il2CppVector3))(Il2CppBase() + 0x1AA5170))(this, newTargetId, newTargetPosition);
	}
	template <typename T = void> T RemoveTrail() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAF3AC))(this);
	}
	template <typename T = uintptr_t> T get_transparency() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA5650))(this);
	}
	template <typename T = bool> T get_hasTransparency() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA5644))(this);
	}
	template <typename T = void> T AddTransparency(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAF3B8))(this, newValue);
	}
	template <typename T = void> T ReplaceTransparency(float newValue) {
		return ((T (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAF4BC))(this, newValue);
	}
	template <typename T = void> T RemoveTransparency() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAF5C0))(this);
	}
	template <typename T = uintptr_t> T get_uIPrefab() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7FF0))(this);
	}
	template <typename T = bool> T get_hasUIPrefab() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7FE4))(this);
	}
	template <typename T = void> T AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAF5CC))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAF724))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T RemoveUIPrefab() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAF87C))(this);
	}
	template <typename T = uintptr_t> T get_warningArea() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7C84))(this);
	}
	template <typename T = bool> T get_hasWarningArea() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AA7C78))(this);
	}
	template <typename T = void> T AddWarningArea(uintptr_t newValue) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AAF888))(this, newValue);
	}
	template <typename T = void> T ReplaceWarningArea(uintptr_t newValue) {
		return ((T (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AAF99C))(this, newValue);
	}
	template <typename T = void> T RemoveWarningArea() {
		return ((T (*)(EffectEntity*))(Il2CppBase() + 0x1AAFAB0))(this);
	}

};

}
