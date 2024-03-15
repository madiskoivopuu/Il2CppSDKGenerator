#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectEntity"));
	}

	template <typename R = uintptr_t> R& GameObject() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = HideHelper*> R& HideHelper() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = FollowCameraComponent*> static R& followCameraComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = HideToolComponent*> static R& hideToolComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = InfinityComponent*> static R& infinityComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = InvisibleComponent*> static R& invisibleComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = MinimapAlwaysVisibleComponent*> static R& minimapAlwaysVisibleComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = MinimapArrowPingComponent*> static R& minimapArrowPingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = NakedComponent*> static R& nakedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = OnCollisionComponent*> static R& onCollisionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = OnDeathComponent*> static R& onDeathComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = PlayOutComponent*> static R& playOutComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = ShowCountComponent*> static R& showCountComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename R = uintptr_t> R get_GameObject() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA88D0))(this);
	}
	template <typename R = void> R set_GameObject(uintptr_t value) {
		return ((R (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA88D8))(this, value);
	}
	template <typename R = HideHelper*> R get_HideHelper() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA88E0))(this);
	}
	template <typename R = void> R set_HideHelper(HideHelper* value) {
		return ((R (*)(EffectEntity*, HideHelper*))(Il2CppBase() + 0x1AA88E8))(this, value);
	}
	template <typename R = void> R AddHideHelper(HideHelper* hideHelper) {
		return ((R (*)(EffectEntity*, HideHelper*))(Il2CppBase() + 0x1AA810C))(this, hideHelper);
	}
	template <typename R = void> R AddView(uintptr_t go) {
		return ((R (*)(EffectEntity*, uintptr_t))(Il2CppBase() + 0x1AA58C8))(this, go);
	}
	template <typename R = void> R RemoveView() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA88F0))(this);
	}
	template <typename R = void> static R OnEntityWillBeDestroyed(uintptr_t context, uintptr_t entity) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AA8924))(0, context, entity);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA8A18))(this);
	}
	template <typename R = ActivateNotifyComponent*> R get_activateNotify() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA78F4))(this);
	}
	template <typename R = bool> R get_hasActivateNotify() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4FA8))(this);
	}
	template <typename R = void> R AddActivateNotify(NotifyType* newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(EffectEntity*, NotifyType*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AA8C90))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R ReplaceActivateNotify(NotifyType* newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(EffectEntity*, NotifyType*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AA8DF8))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R RemoveActivateNotify() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA8F60))(this);
	}
	template <typename R = AmbientComponent*> R get_ambient() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7714))(this);
	}
	template <typename R = bool> R get_hasAmbient() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7708))(this);
	}
	template <typename R = void> R AddAmbient(Il2CppString* newValue) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA8F6C))(this, newValue);
	}
	template <typename R = void> R ReplaceAmbient(Il2CppString* newValue) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9080))(this, newValue);
	}
	template <typename R = void> R RemoveAmbient() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA9194))(this);
	}
	template <typename R = AnimatorArmedComponent*> R get_animatorArmed() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA1064))(this);
	}
	template <typename R = bool> R get_hasAnimatorArmed() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7AA4))(this);
	}
	template <typename R = void> R AddAnimatorArmed(int32_t newValue) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA91A0))(this, newValue);
	}
	template <typename R = void> R ReplaceAnimatorArmed(int32_t newValue) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA92A4))(this, newValue);
	}
	template <typename R = void> R RemoveAnimatorArmed() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA93A8))(this);
	}
	template <typename R = AnimatorComponent*> R get_animator() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7A1C))(this);
	}
	template <typename R = bool> R get_hasAnimator() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7A10))(this);
	}
	template <typename R = void> R AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1AA93B4))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1AA955C))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R RemoveAnimator() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA9704))(this);
	}
	template <typename R = AnimatorSyncComponent*> R get_animatorSync() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA9710))(this);
	}
	template <typename R = bool> R get_hasAnimatorSync() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA9798))(this);
	}
	template <typename R = void> R AddAnimatorSync(Il2CppArray<Il2CppString*>* newBoolNames, Il2CppArray<Il2CppString*>* newIntNames, Il2CppArray<FloatParam*>* newFloats) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<FloatParam*>*))(Il2CppBase() + 0x1AA97A4))(this, newBoolNames, newIntNames, newFloats);
	}
	template <typename R = void> R ReplaceAnimatorSync(Il2CppArray<Il2CppString*>* newBoolNames, Il2CppArray<Il2CppString*>* newIntNames, Il2CppArray<FloatParam*>* newFloats) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<FloatParam*>*))(Il2CppBase() + 0x1AA98E8))(this, newBoolNames, newIntNames, newFloats);
	}
	template <typename R = void> R RemoveAnimatorSync() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA9A2C))(this);
	}
	template <typename R = AttachComponent*> R get_attach() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA8084))(this);
	}
	template <typename R = bool> R get_hasAttach() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA77B4))(this);
	}
	template <typename R = void> R AddAttach(AttachType* newType) {
		return ((R (*)(EffectEntity*, AttachType*))(Il2CppBase() + 0x1AA9A38))(this, newType);
	}
	template <typename R = void> R ReplaceAttach(AttachType* newType) {
		return ((R (*)(EffectEntity*, AttachType*))(Il2CppBase() + 0x1AA9B3C))(this, newType);
	}
	template <typename R = void> R RemoveAttach() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA9C40))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7E34))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA8C78))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9C4C))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9D60))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA9E74))(this);
	}
	template <typename R = BubbleComponent*> R get_bubble() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7BF0))(this);
	}
	template <typename R = bool> R get_hasBubble() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7BE4))(this);
	}
	template <typename R = void> R AddBubble(Il2CppString* newText) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9E80))(this, newText);
	}
	template <typename R = void> R ReplaceBubble(Il2CppString* newText) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AA9F94))(this, newText);
	}
	template <typename R = void> R RemoveBubble() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA0A8))(this);
	}
	template <typename R = ColorComponent*> R get_color() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA55BC))(this);
	}
	template <typename R = bool> R get_hasColor() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA55B0))(this);
	}
	template <typename R = void> R AddColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((R (*)(EffectEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1AAA0B4))(this, newPriority, newHexColor);
	}
	template <typename R = void> R ReplaceColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((R (*)(EffectEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1AAA1D0))(this, newPriority, newHexColor);
	}
	template <typename R = void> R RemoveColor() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA2EC))(this);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA786C))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7860))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAA2F8))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA54AC))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA3FC))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA408))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA75F8))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AA7604))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAA490))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA594))(this);
	}
	template <typename R = EffectByCountComponent*> R get_effectByCount() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA5A0))(this);
	}
	template <typename R = bool> R get_hasEffectByCount() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA628))(this);
	}
	template <typename R = void> R AddEffectByCount(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AAA634))(this, newNames);
	}
	template <typename R = void> R ReplaceEffectByCount(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AAA748))(this, newNames);
	}
	template <typename R = void> R RemoveEffectByCount() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAA85C))(this);
	}
	template <typename R = EffectContainerComponent*> R get_effectContainer() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4F14))(this);
	}
	template <typename R = bool> R get_hasEffectContainer() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4F08))(this);
	}
	template <typename R = void> R AddEffectContainer(Il2CppArray<Item*>* newItems) {
		return ((R (*)(EffectEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1AAA868))(this, newItems);
	}
	template <typename R = void> R ReplaceEffectContainer(Il2CppArray<Item*>* newItems) {
		return ((R (*)(EffectEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1AAA97C))(this, newItems);
	}
	template <typename R = void> R RemoveEffectContainer() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAAA90))(this);
	}
	template <typename R = bool> R get_isFollowCamera() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA77C0))(this);
	}
	template <typename R = void> R set_isFollowCamera(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAAA9C))(this, value);
	}
	template <typename R = GrabViewComponent*> R get_grabView() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA58D0))(this);
	}
	template <typename R = bool> R get_hasGrabView() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA58BC))(this);
	}
	template <typename R = void> R AddGrabView(Il2CppString* newAnimatorKey) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAABB4))(this, newAnimatorKey);
	}
	template <typename R = void> R ReplaceGrabView(Il2CppString* newAnimatorKey) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAACC8))(this, newAnimatorKey);
	}
	template <typename R = void> R RemoveGrabView() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAADDC))(this);
	}
	template <typename R = bool> R get_isHideTool() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7AB0))(this);
	}
	template <typename R = void> R set_isHideTool(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAADE8))(this, value);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4DEC))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAAF00))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA53A8))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAAF0C))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAB010))(this);
	}
	template <typename R = bool> R get_isInfinity() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA75EC))(this);
	}
	template <typename R = void> R set_isInfinity(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB01C))(this, value);
	}
	template <typename R = bool> R get_isInvisible() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7448))(this);
	}
	template <typename R = void> R set_isInvisible(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB134))(this, value);
	}
	template <typename R = LocalRotationComponent*> R get_localRotation() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7EC8))(this);
	}
	template <typename R = bool> R get_hasLocalRotation() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7EBC))(this);
	}
	template <typename R = void> R AddLocalRotation(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAB24C))(this, newValue);
	}
	template <typename R = void> R ReplaceLocalRotation(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAB350))(this, newValue);
	}
	template <typename R = void> R RemoveLocalRotation() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAB454))(this);
	}
	template <typename R = bool> R get_isMinimapAlwaysVisible() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA56D8))(this);
	}
	template <typename R = void> R set_isMinimapAlwaysVisible(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB460))(this, value);
	}
	template <typename R = MinimapArrowComponent*> R get_minimapArrow() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAB578))(this);
	}
	template <typename R = bool> R get_hasMinimapArrow() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAB600))(this);
	}
	template <typename R = void> R AddMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(EffectEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x1AAB60C))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R ReplaceMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(EffectEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x1AAB748))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R RemoveMinimapArrow() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAB884))(this);
	}
	template <typename R = bool> R get_isMinimapArrowPing() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAB890))(this);
	}
	template <typename R = void> R set_isMinimapArrowPing(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAB89C))(this, value);
	}
	template <typename R = MinimapComponent*> R get_minimap() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7F5C))(this);
	}
	template <typename R = bool> R get_hasMinimap() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7F50))(this);
	}
	template <typename R = void> R AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(EffectEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0x1AAB9B4))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(EffectEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0x1AABAFC))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R RemoveMinimap() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AABC44))(this);
	}
	template <typename R = bool> R get_isNaked() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA779C))(this);
	}
	template <typename R = void> R set_isNaked(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AABC50))(this, value);
	}
	template <typename R = NotificationComponent*> R get_notification() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA77D8))(this);
	}
	template <typename R = bool> R get_hasNotification() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA77CC))(this);
	}
	template <typename R = void> R AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(EffectEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AABD68))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(EffectEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AABED4))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R RemoveNotification() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC040))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC04C))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC0D4))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AAC0E0))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AAC1F4))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC308))(this);
	}
	template <typename R = bool> R get_isOnCollision() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7DA0))(this);
	}
	template <typename R = void> R set_isOnCollision(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAC314))(this, value);
	}
	template <typename R = bool> R get_isOnDeath() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC42C))(this);
	}
	template <typename R = void> R set_isOnDeath(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AA1750))(this, value);
	}
	template <typename R = OtherComponent*> R get_other() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4D64))(this);
	}
	template <typename R = bool> R get_hasOther() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4D58))(this);
	}
	template <typename R = void> R AddOther(int32_t newId) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA713C))(this, newId);
	}
	template <typename R = void> R ReplaceOther(int32_t newId) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA5298))(this, newId);
	}
	template <typename R = void> R RemoveOther() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA539C))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC438))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA77A8))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA7240))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAC4C0))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC5C4))(this);
	}
	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC5D0))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4F9C))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AAC658))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AAC75C))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC860))(this);
	}
	template <typename R = bool> R get_isPlayOut() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC86C))(this);
	}
	template <typename R = void> R set_isPlayOut(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAC878))(this, value);
	}
	template <typename R = PolymorphComponent*> R get_polymorph() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAC990))(this);
	}
	template <typename R = bool> R get_hasPolymorph() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA8078))(this);
	}
	template <typename R = void> R AddPolymorph(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AACA18))(this, newName);
	}
	template <typename R = void> R ReplacePolymorph(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AACB2C))(this, newName);
	}
	template <typename R = void> R RemovePolymorph() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AACC40))(this);
	}
	template <typename R = PrefabComponent*> R get_prefab() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7DAC))(this);
	}
	template <typename R = bool> R get_hasPrefab() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA5958))(this);
	}
	template <typename R = void> R AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x1AACC4C))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x1AA5778))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R RemovePrefab() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AACD90))(this);
	}
	template <typename R = PrefabsComponent*> R get_prefabs() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA56F0))(this);
	}
	template <typename R = bool> R get_hasPrefabs() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA56E4))(this);
	}
	template <typename R = void> R AddPrefabs(Il2CppArray<Item*>* newItems) {
		return ((R (*)(EffectEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1AACD9C))(this, newItems);
	}
	template <typename R = void> R ReplacePrefabs(Il2CppArray<Item*>* newItems) {
		return ((R (*)(EffectEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1AACEB0))(this, newItems);
	}
	template <typename R = void> R RemovePrefabs() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AACFC4))(this);
	}
	template <typename R = RadiusComponent*> R get_radius() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4E80))(this);
	}
	template <typename R = bool> R get_hasRadius() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4E74))(this);
	}
	template <typename R = void> R AddRadius(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AACFD0))(this, newValue);
	}
	template <typename R = void> R ReplaceRadius(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AA7344))(this, newValue);
	}
	template <typename R = void> R RemoveRadius() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAD0D4))(this);
	}
	template <typename R = RotationComponent*> R get_rotation() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAD0E0))(this);
	}
	template <typename R = bool> R get_hasRotation() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAD168))(this);
	}
	template <typename R = void> R AddRotation(float newAngle) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAD174))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotation(float newAngle) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAD278))(this, newAngle);
	}
	template <typename R = void> R RemoveRotation() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAD37C))(this);
	}
	template <typename R = ShakeComponent*> R get_shake() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7988))(this);
	}
	template <typename R = bool> R get_hasShake() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA797C))(this);
	}
	template <typename R = void> R AddShake(Il2CppString* newTriggerName, Il2CppString* newBoolName, float newMaxRadius, Il2CppString* newCameraUniqueLookup) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, float, Il2CppString*))(Il2CppBase() + 0x1AAD388))(this, newTriggerName, newBoolName, newMaxRadius, newCameraUniqueLookup);
	}
	template <typename R = void> R ReplaceShake(Il2CppString* newTriggerName, Il2CppString* newBoolName, float newMaxRadius, Il2CppString* newCameraUniqueLookup) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, float, Il2CppString*))(Il2CppBase() + 0x1AAD4DC))(this, newTriggerName, newBoolName, newMaxRadius, newCameraUniqueLookup);
	}
	template <typename R = void> R RemoveShake() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAD630))(this);
	}
	template <typename R = bool> R get_isShowCount() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAD63C))(this);
	}
	template <typename R = void> R set_isShowCount(bool value) {
		return ((R (*)(EffectEntity*, bool))(Il2CppBase() + 0x1AAD648))(this, value);
	}
	template <typename R = SingleComponent*> R get_single() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA5054))(this);
	}
	template <typename R = bool> R get_hasSingle() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA5048))(this);
	}
	template <typename R = void> R AddSingle(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAD760))(this, newName);
	}
	template <typename R = void> R ReplaceSingle(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAD874))(this, newName);
	}
	template <typename R = void> R RemoveSingle() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAD988))(this);
	}
	template <typename R = SocketComponent*> R get_socket() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7D18))(this);
	}
	template <typename R = bool> R get_hasSocket() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7D0C))(this);
	}
	template <typename R = void> R AddSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((R (*)(EffectEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1AAD994))(this, newName, newIgnoreRotation);
	}
	template <typename R = void> R ReplaceSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((R (*)(EffectEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1AADAB4))(this, newName, newIgnoreRotation);
	}
	template <typename R = void> R RemoveSocket() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AADBD4))(this);
	}
	template <typename R = SoundComponent*> R get_sound() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7460))(this);
	}
	template <typename R = bool> R get_hasSound() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7454))(this);
	}
	template <typename R = void> R AddSound(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AADBE0))(this, newName);
	}
	template <typename R = void> R ReplaceSound(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AADCF4))(this, newName);
	}
	template <typename R = void> R RemoveSound() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AADE08))(this);
	}
	template <typename R = SoundIdComponent*> R get_soundId() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AADE14))(this);
	}
	template <typename R = bool> R get_hasSoundId() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AADE9C))(this);
	}
	template <typename R = void> R AddSoundId(uint32_t newValue) {
		return ((R (*)(EffectEntity*, uint32_t))(Il2CppBase() + 0x1AA74E8))(this, newValue);
	}
	template <typename R = void> R ReplaceSoundId(uint32_t newValue) {
		return ((R (*)(EffectEntity*, uint32_t))(Il2CppBase() + 0x1AADEA8))(this, newValue);
	}
	template <typename R = void> R RemoveSoundId() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AADFAC))(this);
	}
	template <typename R = SourcesComponent*> R get_sources() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AADFB8))(this);
	}
	template <typename R = bool> R get_hasSources() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAE040))(this);
	}
	template <typename R = void> R AddSources(Il2CppDictionary<int32_t, int32_t>* newValues) {
		return ((R (*)(EffectEntity*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x1AAE04C))(this, newValues);
	}
	template <typename R = void> R ReplaceSources(Il2CppDictionary<int32_t, int32_t>* newValues) {
		return ((R (*)(EffectEntity*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x1AAE160))(this, newValues);
	}
	template <typename R = void> R RemoveSources() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAE274))(this);
	}
	template <typename R = SpawnTriggerComponent*> R get_spawnTrigger() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7B5C))(this);
	}
	template <typename R = bool> R get_hasSpawnTrigger() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7B50))(this);
	}
	template <typename R = void> R AddSpawnTrigger(Il2CppString* newCondition, Il2CppString* newTargetTriggerName, Il2CppString* newEffectTriggerName) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE280))(this, newCondition, newTargetTriggerName, newEffectTriggerName);
	}
	template <typename R = void> R ReplaceSpawnTrigger(Il2CppString* newCondition, Il2CppString* newTargetTriggerName, Il2CppString* newEffectTriggerName) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE3C4))(this, newCondition, newTargetTriggerName, newEffectTriggerName);
	}
	template <typename R = void> R RemoveSpawnTrigger() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAE508))(this);
	}
	template <typename R = StartConditionComponent*> R get_startCondition() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4FC0))(this);
	}
	template <typename R = bool> R get_hasStartCondition() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4FB4))(this);
	}
	template <typename R = void> R AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE514))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAE63C))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveStartCondition() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAE764))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA0FDC))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA0FD0))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AAE770))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(EffectEntity*, int64_t))(Il2CppBase() + 0x1AA4A34))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAE874))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAE880))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAE908))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AAE914))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(EffectEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AAEA28))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAEB3C))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA4CD0))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA8C84))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AA7038))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(EffectEntity*, int32_t))(Il2CppBase() + 0x1AAEB48))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAEC4C))(this);
	}
	template <typename R = TargetMarkerComponent*> R get_targetMarker() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAEC58))(this);
	}
	template <typename R = bool> R get_hasTargetMarker() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAECE0))(this);
	}
	template <typename R = void> R AddTargetMarker(int32_t newPriority, Il2CppArray<Il2CppString*>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(EffectEntity*, int32_t, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAECEC))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceTargetMarker(int32_t newPriority, Il2CppArray<Il2CppString*>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(EffectEntity*, int32_t, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAEE98))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveTargetMarker() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAF044))(this);
	}
	template <typename R = ToolFxComponent*> R get_toolFx() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7AC8))(this);
	}
	template <typename R = bool> R get_hasToolFx() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7ABC))(this);
	}
	template <typename R = void> R AddToolFx(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAF050))(this, newName);
	}
	template <typename R = void> R ReplaceToolFx(Il2CppString* newName) {
		return ((R (*)(EffectEntity*, Il2CppString*))(Il2CppBase() + 0x1AAF164))(this, newName);
	}
	template <typename R = void> R RemoveToolFx() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAF278))(this);
	}
	template <typename R = TrailComponent*> R get_trail() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA50E8))(this);
	}
	template <typename R = bool> R get_hasTrail() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA50DC))(this);
	}
	template <typename R = void> R AddTrail(int32_t newTargetId, uintptr_t newTargetPosition) {
		return ((R (*)(EffectEntity*, int32_t, uintptr_t))(Il2CppBase() + 0x1AAF284))(this, newTargetId, newTargetPosition);
	}
	template <typename R = void> R ReplaceTrail(int32_t newTargetId, uintptr_t newTargetPosition) {
		return ((R (*)(EffectEntity*, int32_t, uintptr_t))(Il2CppBase() + 0x1AA5170))(this, newTargetId, newTargetPosition);
	}
	template <typename R = void> R RemoveTrail() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAF3AC))(this);
	}
	template <typename R = TransparencyComponent*> R get_transparency() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA5650))(this);
	}
	template <typename R = bool> R get_hasTransparency() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA5644))(this);
	}
	template <typename R = void> R AddTransparency(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAF3B8))(this, newValue);
	}
	template <typename R = void> R ReplaceTransparency(float newValue) {
		return ((R (*)(EffectEntity*, float))(Il2CppBase() + 0x1AAF4BC))(this, newValue);
	}
	template <typename R = void> R RemoveTransparency() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAF5C0))(this);
	}
	template <typename R = UIPrefabComponent*> R get_uIPrefab() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7FF0))(this);
	}
	template <typename R = bool> R get_hasUIPrefab() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7FE4))(this);
	}
	template <typename R = void> R AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAF5CC))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(EffectEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1AAF724))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R RemoveUIPrefab() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAF87C))(this);
	}
	template <typename R = WarningAreaComponent*> R get_warningArea() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7C84))(this);
	}
	template <typename R = bool> R get_hasWarningArea() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AA7C78))(this);
	}
	template <typename R = void> R AddWarningArea(WarningAreaParam* newValue) {
		return ((R (*)(EffectEntity*, WarningAreaParam*))(Il2CppBase() + 0x1AAF888))(this, newValue);
	}
	template <typename R = void> R ReplaceWarningArea(WarningAreaParam* newValue) {
		return ((R (*)(EffectEntity*, WarningAreaParam*))(Il2CppBase() + 0x1AAF99C))(this, newValue);
	}
	template <typename R = void> R RemoveWarningArea() {
		return ((R (*)(EffectEntity*))(Il2CppBase() + 0x1AAFAB0))(this);
	}

};

