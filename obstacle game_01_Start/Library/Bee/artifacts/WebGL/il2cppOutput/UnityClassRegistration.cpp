extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 70 non stripped classes
	//0. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//1. Animator
	RegisterUnityClass<Animator>("Animation");
	//2. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//3. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//4. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//5. Motion
	RegisterUnityClass<Motion>("Animation");
	//6. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//7. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//8. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//9. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//10. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//11. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//12. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//13. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//14. Camera
	RegisterUnityClass<Camera>("Core");
	//15. Component
	RegisterUnityClass<Unity::Component>("Core");
	//16. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//17. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//18. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//19. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//20. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//21. GameManager
	RegisterUnityClass<GameManager>("Core");
	//22. GameObject
	RegisterUnityClass<GameObject>("Core");
	//23. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//24. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//25. InputManager
	RegisterUnityClass<InputManager>("Core");
	//26. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//27. Light
	RegisterUnityClass<Light>("Core");
	//28. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//29. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//30. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//31. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//32. Material
	RegisterUnityClass<Material>("Core");
	//33. Mesh
	RegisterUnityClass<Mesh>("Core");
	//34. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//35. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//36. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//37. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//38. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//39. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//40. Object
	//Skipping Object
	//41. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//42. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//43. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//44. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//45. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//46. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//47. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//48. Renderer
	RegisterUnityClass<Renderer>("Core");
	//49. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//50. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//51. Shader
	RegisterUnityClass<Shader>("Core");
	//52. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//53. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//54. Sprite
	RegisterUnityClass<Sprite>("Core");
	//55. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//56. TagManager
	RegisterUnityClass<TagManager>("Core");
	//57. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//58. Texture
	RegisterUnityClass<Texture>("Core");
	//59. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//60. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//61. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//62. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//63. Transform
	RegisterUnityClass<Transform>("Core");
	//64. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//65. Collider
	RegisterUnityClass<Collider>("Physics");
	//66. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//67. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//68. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//69. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");

}
